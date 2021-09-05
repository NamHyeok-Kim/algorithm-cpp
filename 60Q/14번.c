#include <stdio.h>

int main() {
	freopen("input.txt", "r", stdin);

	int A[5][3] = { 0 };//자료를 읽어올 배열변수
	//int a, b, c;
	int d[6] = {0, 5000, 6000, 7000, 10000, 20000 };
	int i;
	//자료를 읽어오기
	i = 0;
	while (1) {
		if (i > 4) break;
		scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
		i++;
	}

	//읽어온 자료 출력
	for (i = 0; i < 5; i++)
		printf("%d %d %d\n", A[i][0], A[i][1], A[i][2]);
	//조건에 맞게 처리하기
	//결과 출력하기
	i = 0;
	while(1){
		if (A[i][0] + A[i][1] + A[i][2] == 0) break;
		printf("%d\n", d[A[i][0]] + d[A[i][1]] + d[A[i][2]]);
	}

	return 0;
}