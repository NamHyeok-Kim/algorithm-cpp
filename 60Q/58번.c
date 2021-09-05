#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int m, n, x;

	scanf("%d %d %d", &m, &n, &x);
	printf("%d.", m / n);
	m = m % n;
	for (int i = 0; i < x; i++) {
		printf("%d", m * 10 / n);
		m = m * 10 % n;
	}
}