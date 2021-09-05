#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* baeyul[5];//첫 번째 값이 들어갈 공간 변수
	int cnt; //증가값 변수를 선언

	//선언된 변수에 동작배열값을 결정하여 넣기
	cnt = 1;
	for (int i = 0; i < 5; i++) {
		baeyul[i] = (int*)malloc(sizeof(int) * 5);
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++) {
				*(baeyul[i] + j) = cnt++;			
			}
			cnt += 4;
		}
		else {
			for (int j = 0; j < 5; j++) {
				*(baeyul[i] + j) = cnt--;
			}
			cnt += 6;
		}
	}
	//결과를 출력한다.

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%4d", *(baeyul[i] + j));
		}
		printf("\n");
	}
}