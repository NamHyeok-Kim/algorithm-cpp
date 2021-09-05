
#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int pas[10][20] = { 0 };
	int r, c;
	int a;//읽어올 변수
	

	scanf("%d", &a);

	pas[0][a] = 1;
	for (r = 1; r <= a; r++) {
		for (c = a - r; c <= a + r; c += 2) {
			pas[r][c] = pas[r - 1][c - 1] + pas[r - 1][c + 1];

		}
	}

	for (r = 0; r <= a; r++) {
		for (c = 0; c <= a * 2; c++) {
			if (pas[r][c]) printf("%2d", pas[r][c]);
			else printf("%2c", ' ');
		}
		printf("\n");
	}

	return 0;
}