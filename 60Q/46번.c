#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char c[50];
	char change[25];
	scanf("%s", c);

	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == '@') {
			for (int j = 0; j < i; j++) {
				change[j] = c[j];
				c[j] = c[i + j+1];
				c[i + j+1] = change[j];
			}
		}
	}
	for (int i = 0; i < strlen(c); i++) {
		printf("%c", c[i]);
	}
}