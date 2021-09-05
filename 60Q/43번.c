#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char reverse[101];

	scanf("%s", reverse);

	for (int i = strlen(reverse); i >= 0; i--) {
		printf("%c", reverse[i]);
	}
}