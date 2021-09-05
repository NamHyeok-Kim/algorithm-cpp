#include <stdio.h>
#include <string.h>
int main()
{
	freopen("input.txt", "r", stdin);
	
	int h = 10;
	char c[101];

	scanf("%s", c);
	for (int i = 0; i < strlen(c)-1 ; i++) {
		if (c[i] == c[i + 1])h += 5;
		else h += 10;
	}
	printf("%d", h);
}