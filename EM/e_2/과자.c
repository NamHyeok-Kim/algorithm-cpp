#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", a * b - c);
}