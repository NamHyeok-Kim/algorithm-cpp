#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n, m;
	scanf("%d %d",&n , &m);

	for (int i = n; i < m; i++) {
		if (i % 10 % 3 == 0 && i % 10 != 0) {
			printf("%5d", i);
		}
	
	}
}