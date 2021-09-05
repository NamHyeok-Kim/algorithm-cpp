#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

int main()
{
	srand(time(NULL));

	int* p = NULL;

	p = (int*)malloc(SIZE * sizeof(int));
	if (p == NULL){
		printf("메모리 할당 오류");
		exit(0);
	}

	for (int i = 0; i < SIZE; i++) {
		p[i] = rand();
	}

	int max = p[0];
	for (int i = 1; i < SIZE; i++) {
		if (p[i] > max) {
			max = p[1];
		}
	}

	printf("최댓값 = %d \n", max);
	free(p);

	return 0;
}