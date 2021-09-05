#include <stdio.h>

int main()
{
	int i, j;
	scanf_s("%d %d", &i, &j);
	printf("%d %d", i/j, i%j);
}