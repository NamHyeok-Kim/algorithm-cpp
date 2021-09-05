#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (b > a) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	while (1) {
		if (a % b == 0) break;
		int tmp = a;
		a = b;
		b = tmp % b;
	}
	// a <- b
	// b <- a % b
	printf("%d", b);
}