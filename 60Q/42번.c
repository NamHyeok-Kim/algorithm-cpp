#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Z zoo[i] ==

int main()
{
	freopen("input.txt", "r", stdin);

	srand(time(NULL));
	int n;
	int zoo[100];
	int dice[7][2] = { 0 };
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		zoo[i] = rand() % 6 + 1;
		if (Z 1)dice[1][1]++;
		else if (Z 2)dice[2][1]++;
		else if (Z 3)dice[3][1]++;
		else if (Z 4)dice[4][1]++;
		else if (Z 5)dice[5][1]++;
		else if (Z 6)dice[6][1]++;
	}
	for (int i = 1; i <= 6; i++) {
		printf("%d %d %.2lf \n", i, dice[i][1], dice[i][1] / (double)n * 100);
	}
}