#include <stdio.h>

int main()
{
	freopen("line.txt", "r", stdin);
	char tmp;
	int num = 1;

	for (int i = 0; ; i++) {
		if(scanf("%c", &tmp) == EOF) break;
		if (tmp == '\n') num++;
	}
	printf("%d", num);
}