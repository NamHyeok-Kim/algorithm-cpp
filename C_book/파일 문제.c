#include <stdio.h>

int main()
{
	int num[101];
	int sum = 0, idx = 0;

	freopen("NUMBER.txt", "r", stdin);

	for(int i = 0;;i++) {
		if (scanf("%d", &num[i]) == EOF) break;
		idx++;
		sum += num[i];
	}

	printf("정수들의 개수 : %d\n", idx);
	printf("정수들의 합계 : %d\n", sum);
	printf("정수들의 평균 : %d\n", sum / idx);

}