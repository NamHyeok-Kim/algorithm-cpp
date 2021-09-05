#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* by[5];
	int cnt = 1;

	for (int i = 0; i < 5; i++){
		by[i] = (int*)malloc(5 * sizeof(int));

		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++) {
				by[i][j] = cnt++;
			}
			cnt += 4;
		}
		else {
			for (int j = 0; j < 5; j++) {
				by[i][j] = cnt--;
			}
			cnt += 4;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%4d", by[i][j]);
		}
		printf("\n");
	}
}