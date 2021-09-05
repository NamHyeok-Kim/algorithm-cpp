#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
}