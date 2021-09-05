#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	char a[101];
	gets(a);
	for (int i = 0;i < 101; i++) {
		if (a[i] == 'A') {
			a[i] = '*';
		}

	}
	printf("%s\n", a);
}