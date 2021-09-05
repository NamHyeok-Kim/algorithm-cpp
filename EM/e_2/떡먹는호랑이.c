#include <stdio.h>

int fibo(int day, int dd, int o, int t)
{
	int tmp = 0;
	for (int i = 0; i < day; i++) {
		tmp = o;
		o = t;
		t = tmp + t;
	}
	if (tmp == dd) {
		return 0;
	}
	else return 1;
}

int main()
{
	freopen("input.txt", "r", stdin);

	int a, b, j;
	scanf("%d %d", &a, &b);

	for (int i = 1; i < 100; i++) {
		for (j = i; j < 100; j++) {
			if (fibo(a, b, i, j) == 0) {
				printf("%d %d", i, j);
				break;
			}
		}
		if (j != 100) break;
	}
}