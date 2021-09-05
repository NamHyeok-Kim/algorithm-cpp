#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int A, B, C;
	int N[10] = { 0 }, x;

	scanf("%d %d %d", &A, &B, &C);

	x = A * B * C;

	for (int i = 0; ; i++) {
		N[x % 10]++;
		x /= 10;
		if (x == 0)break;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", N[i]);
	}


}
//아아아아아
//아아아아아
//아아아아아
//아아아아아
//아아아아아
//아아아아아