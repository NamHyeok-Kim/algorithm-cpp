#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n;
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++) {
		for (int j = n; j >i-1; j--) {
			printf("%d", j);
		}
		printf("\n");
	}
}