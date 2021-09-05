#include <stdio.h>

int main()
{
	int i, j;
	scanf_s("%d %d", &i, &j);
	if (i < j) {
		printf("%d", j);
	}
	else {
		printf("%d", i);
	}
}