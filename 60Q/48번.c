#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	int cnt = 1, n = 0;
	char c[100];

	scanf("%s", c);

	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == c[i + 1]) {
			cnt++;
		}
		else {
			if (cnt >= 5)
				printf("%c(%d)", c[i], cnt);
			else {
				for (int j = 0; j < cnt; j++)
					printf("%c", c[i]);
			}
			cnt = 1;
		}
	}
}