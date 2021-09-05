#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* by1[5];
	int* by2[5];
	int cnt = 0;

	for (int i = 0; i < 5; i++) {

		by1[i] = (int*)malloc(sizeof(int) * 5);

		for (int j = 0; j < 5; j++) {
			by1[i][j] = cnt;
			cnt++;
		}
	}
	cnt = 24;
	for (int i = 0; i < 5; i++) {
		
		by2[i] = (int*)malloc(sizeof(int) * 5);
		
		for (int j = 0; j < 5; j++) {
			by2[i][j] = cnt;
			cnt--;
		}
	}
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			printf("%4d", by1[i][j] + by2[i][j]);
		}
		printf("\n");
	}
	free(by1);
	free(by2);
}