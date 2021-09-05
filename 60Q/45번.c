#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char c[30];

	for (int i = 0; i < 30; i++) {
		gets(c);
	}
	for (int i = 0; i < strlen(c); i++) {
		if ('a' <= c[i] && c[i] <= 'z') {
			c[i] = c[i] - ('a' - 'A');
		}
	}
	for (int i = 0; i < strlen(c); i++) {
		printf("%c", c[i]);
	}
}