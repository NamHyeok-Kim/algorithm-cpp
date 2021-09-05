#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n, b, j;
	scanf("%d %d", &n, &b);

	for (int i = n; i <= b; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) printf("%d ", i);
	}
}