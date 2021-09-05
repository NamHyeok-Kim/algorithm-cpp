#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int** a;
	int n, nn;
	scanf("%d", &n);
	a = (int**)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		a[i] = (int*)malloc(sizeof(int*) * 7);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &nn);
			a[i][nn]++;
		}
	}

	int result;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (a[i][j] == 3) {
				result = 10000 + 100 * j;
				break;
			}
			if (a[i][j] == 2) {
				result = 1000 + 100 * j;
				break;
			}
			if (a[i][j] == 1) {
				result = 100 * j;

			}
		}
		printf("%d\n", result);
	}
}