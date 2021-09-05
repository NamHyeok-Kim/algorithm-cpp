#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (b + c >= 60) {
		a += 1;
		b = b + c - 60;
		printf("%d %d", a, b);
	}
	else printf("%d %d", a, b + c);
}