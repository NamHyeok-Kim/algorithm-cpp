#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int a,b,c;

	scanf("%d%d%d", &a, &b, &c);
	
	printf("%d", a * 1000 + b + c);
}