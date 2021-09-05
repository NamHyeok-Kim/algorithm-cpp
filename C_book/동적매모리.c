#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE  1000

int main()
{
	int* p = NULL;
	
	p = (int*)malloc(SIZE);
	if (p == NULL) {
		printf("매모리 할당 오류\n");
		exit(0);
	}

	for (int i = 0; i < SIZE; i++) {
		p[i] = rand();
	}

	int max = p[0];
	for (int i = 0; i < SIZE; i++) {
		if (p[i] > max) {
			max = p[i];
		}
	}

	printf("최댓값 : %d \n", max);
	free(p);

	return 0;
}