#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char c[10];
	scanf("%s	", c);

	printf("%d", c[2]);
}