#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int a, b, c = 0;
	int m[5];
	for (int i = 0; i < 4; i++) {
		scanf("%d %d", &a, &b); 
		c -= a;
		c += b;
		m[i] = c;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (m[j] < m[j + 1]) {
				int tmp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = tmp;
			}
		}
	}
	printf("%d", m[0]);
}