#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char c[10];
	char lr, pos = 0;
	char tmp[10], out[10];
	int move;
	gets(c);
	scanf("%c", &lr);
	scanf("%d", &move);

	if (lr == 'L') {
		pos -= move;
		if (pos < 0) pos += strlen(c);
		for (int i = 0; i < strlen(c); i++) {
			out[pos++] = c[i];
			if (pos >= strlen(c)) pos = 0;
		}
	}
	if (lr == 'R') {
		pos += move;
		if (pos > strlen(c)) pos -= strlen(c);
		for (int i = 0; i < strlen(c); i++) {
			out[pos++] = c[i];
			if (pos >= strlen(c)) pos = 0;
		}
	}
	for (int i = 0; i < strlen(c); i++) {
		printf("%c", out[i]);
	}
}