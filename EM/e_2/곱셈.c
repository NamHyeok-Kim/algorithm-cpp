#include <stdio.h>

int main() 
{
	freopen("input.txt", "r", stdin);

	int a, b;

	scanf("%d %d", &a, &b);
	int r = a * b;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", a * (b % 10));
		b /= 10;
	}
	printf("%d", r);
}