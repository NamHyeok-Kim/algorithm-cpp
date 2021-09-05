#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int a, b, cnt = 0, idx = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) cnt++;
		if (cnt == b) {
			idx = i;
			break;
		}
	}

	printf("%d\n", idx);
}