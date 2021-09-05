#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char u[4];
	int cnt = 0;
	scanf("%s", u);


	for (int i = 0; i < 3; i++) {
		cnt += u[i] - 48;
	}
	printf("%d", cnt);
}