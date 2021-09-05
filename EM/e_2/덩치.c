#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int* a, * b, c, cnt = 1;
	scanf("%d", &c);

	a = (int*)malloc(sizeof(int) * c);
	b = (int*)malloc(sizeof(int) * c);

	for (int i = 0; i < c; i++) {
		scanf("%d %d", &a[i], &b[i]);
	}

	for (int i = 0; i < c; i++) {
		cnt = 1;
		for (int j = 0; j < c; j++) {
			if (a[i] < a[j] && b[i] < b[j]) {
				cnt++;
			}
		}
		printf("%d ", cnt);

	}

}