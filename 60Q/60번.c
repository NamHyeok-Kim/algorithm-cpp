#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int ij[101] = { 1 };
	int n, len = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < len; j++) {
			ij[j] *= 2;
		}
		if (ij[len-1] >= 10) len++;
		for (int j = 0; j < len; j++) {
			if (ij[j] > 9) {
				ij[j + 1] += ij[j] / 10;
				ij[j] = ij[j] % 10;
			}
		}
	}

	for (int i = len - 1; i >= 0; i--) {
		printf("%d", ij[i]);
	}
}
// 2 1 5
// ij[j] >=10 ij[j] ->ij[j+1]