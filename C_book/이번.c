#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* by[5];
	int cnt;

	for (int i = 0; i < 5; i++) {
		by[i] = (int*)malloc(5 * sizeof(int));
		cnt = i+1;

		for (int j = 0; j < 5; j++){
			by[i][j] = cnt;
			cnt += 5;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%4d", by[i][j]);
		}
		printf("\n");
	}
}