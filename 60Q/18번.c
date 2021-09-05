#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	char dan[5][11];
	char cnt = 0;
	for (int i = 0; ; i++) {
		if (scanf("%s", dan[i]) == EOF) break;
		cnt += strlen(dan[i]);
	}
	printf("%d\n", cnt);
}