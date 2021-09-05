#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int rn[10];
	int g = 0;
	
	for (int i = 0; i < 5; i++) {
		rn[i] = rand() % 10;
		printf("%2d", rn[i]);
		g += rn[i] * rn[i];
	}
	printf("\n%d", g % 10);

}