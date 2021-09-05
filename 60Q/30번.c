#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int res[10];
	int tmp;
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &res[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (res[j] > res[j + 1]) {
				tmp = res[j + 1];
				res[j + 1] = res[j];
				res[j] = tmp;
			}
		}
	}
	printf("%d\n%d", res[9], res[0]);
}