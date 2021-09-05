#include <stdio.h>

int main() 
{
	int res[3];
	scanf("%d %d %d", &res[0], &res[1], &res[2]);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (res[j] > res[j + 1]) {

				int tmp = res[j];
				res[j] = res[j + 1];
				res[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%2d", res[i]);
	}
	return 0;
}