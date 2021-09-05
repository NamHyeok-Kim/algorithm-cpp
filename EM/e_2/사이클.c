#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int a, b, tmp_a;
	scanf("%d %d", &a, &b);

	tmp_a = a * a % b;

	for (int i = 1; ; i++) {
		tmp_a = tmp_a * a % b;

		if (tmp_a == a * a % b) {
			printf("%d", i);
			break;
		}
	}
}