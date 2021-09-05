#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi;
	int size;
	printf("배열 사이즈 : ");
	scanf("%d", &size);

	pi = (int)malloc(size * sizeof(int));
	if (pi == NULL) {
		printf("메모리 할당 오류 .\n");
		exit(0);
	}
	for (int i = 0; i < size; i++) {
		pi[i] = i + 1;
		printf("%d", pi[i]);
	}

	free(pi);
	return 0;
}