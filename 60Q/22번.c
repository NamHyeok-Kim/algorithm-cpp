#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n;
	

	for (int i = 0;; i++) {
		scanf("%d", &n);
		
		if (n == 0) break;
		for (int j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
}