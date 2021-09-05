#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	srand(time(NULL));
	int ut[3][4];
	char ABC[4];

	for (int j = 0; j < 3; j++) {
		int c = 0;

		for (int i = 0; i < 4; i++) {
			ut[j][i] = rand() % 2;
			printf("%d ", ut[j][i]);
			c += ut[j][i];
		}
		printf("\n");

		switch (c) {
		case 0:
			ABC[j] = 'A';
			break;
		case 1:
			ABC[j] = 'B';
			break;
		case 2:
			ABC[j] = 'C';
			break;
		case 3:
			ABC[j] = 'D';
			break;
		case 4:
			ABC[j] = 'E';
			break;
		}
	}
	ABC[3] = '\0';
	printf("%s\n", ABC);
}