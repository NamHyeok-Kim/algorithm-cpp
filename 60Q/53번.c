#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int mbz;
	int** p;
	int x, y;

	scanf("%d", &mbz);
	if (mbz % 2 == 0)printf("´Ù½Ã");

	x = mbz / 2;
	y = 0;

	p = (int**)malloc(sizeof(int*) * mbz);
	for (int i = 0; i < mbz; i++) {
		p[i] = (int*)malloc(sizeof(int) * mbz);
	}
	
	for (int i = 1; i <= mbz * mbz; i++) {
		p[y][x] = i;
		if (i % mbz != 0) {
			x++; y--;
		}
		else
			y++;

		if (y < 0) y = mbz - 1;
		if (x >= mbz) x = 0;
	}

	for (int i = 0; i < mbz; i++) {
		for (int j = 0; j < mbz; j++) {
			printf("%4d", p[i][j]);
		}
		printf("\n");
	}
}