#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char res[5][50];
	int s;

	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		for (int j = 0; j < 20; j++) {
			scanf("%c", &res[i][j]);
			if( res[i][j]=='\n')break;
			else if (res[i][j] == 'A')cnt++;
		}
		printf("%d\n", cnt);
	}
}