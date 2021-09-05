#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int u, cnt = 1;
	int** p;
	scanf("%d", &u);

	p = (int**)malloc(u * sizeof(int*));
	for (int i = 0; i < u; i++) {
		p[i] = (int*)malloc(u * sizeof(int));
	}
	for (int i = u - 1; i >= 0; i--) {
		for (int j = u-1; j >=0; j--) {
			p[j][i] = cnt++;
		}
	}
	for (int i = 0; i < u; i++) {
		for (int j = 0; j < u ; j++) {
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}
}