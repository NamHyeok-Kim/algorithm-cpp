#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int a, nul = 1, len = 1;
	scanf("%d", &a);
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= nul; j++)
			printf("  ");

		for (int j = 0; j < len; j++) {
			printf("* ");
			
		}

		if (i < a / 2) {
			len += 2;
			nul -= 1;
		}
		else {
			len -= 2;
			nul += 1;
		}
		printf("\n");
	}
}