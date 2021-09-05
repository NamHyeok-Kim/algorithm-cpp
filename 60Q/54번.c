#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int** p;
	int n;//입력 수 행열수
	int cnt;//증가값
	int N;//n을 대체할 수
	int r, c;//행열변수
	int sw;//행열의 방향을 결정할 변수
	int i;//반복변수

	scanf("%d", &n);
	p = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		p[i] = (int*)malloc(sizeof(int) * n);
	}

	N = n; 
	r = 0; c = -1; sw = 1; cnt = 0;
	while (1)
	{
		//열변환
		for (i = 1; i <= N; i++) {
			c += sw;
			p[r][c] = ++cnt;
		}

		N--;
		if (N < 1) break;

		//행변환
		for (i = 1; i <= N; i++) {
			r += sw;
			p[r][c] = ++cnt;
		}

		sw *= -1;
	}

	//출력부분
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}