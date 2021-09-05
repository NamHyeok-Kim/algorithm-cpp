#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n, i;
	int lee[101] = { 0 };

	scanf("%d", &n);

	for (i = 0; ;i++) {
		lee[i] = n % 2;
		n /= 2;
		if (n == 0) break;
	}

	for (int j = i; j >= 0; j--) {
		printf("%d", lee[j]);
	}
}