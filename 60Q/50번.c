#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n, cnt, len = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		cnt = 1;

		for (int j = i; j < n; j++)
			printf(" ");

		for (int j = 0; j < len; j++) {
			if (j < len / 2)
				printf("%d", cnt++);
			else
				printf("%d", cnt--);
		}
		printf("\n");
		len += 2;
	}
}