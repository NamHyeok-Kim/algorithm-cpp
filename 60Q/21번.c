#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
			cnt++;
			printf("%3d", cnt);
		}
		printf("\n");
	}
}