#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n, max = 0, idx = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		if (max < n) {
			idx = i + 1;
			max = n;
		}
	}
	printf("%d\n%d\n", max, idx);
}