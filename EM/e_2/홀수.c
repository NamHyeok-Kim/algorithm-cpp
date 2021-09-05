#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int h[7], idx = 0;
	int a, b = 0;
	int min = 0;
	
	for (int i = 0; i < 7; i++) {
		scanf("%d", &a);
		if (a % 2 != 0) {
			h[idx++] = a;
			b += a;
		}
	}

	for (int i = 0; i < idx; i++) {
		for (int j = 0; j < idx-1; j++) {
			if (h[j] > h[j + 1]) {
				int tmp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = tmp;
			}
		}
	}
	printf("%d %d", b, h[0]);

}