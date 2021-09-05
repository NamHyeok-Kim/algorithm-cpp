#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int cnt = 0, a, b, c;
	int d[7] = { 0, 5500, 7000, 8500, 9500, 12000, 20000 };

	for (int i = 0; ; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (!(a && b && c)) break;

		int tmp = d[b] * c;
		if (a == 1) tmp * 9 / 10;
		else if (a == 2)tmp * 8 / 10;
		printf("%d\n", tmp);
	}
}