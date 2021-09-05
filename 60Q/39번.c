#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int* p;
	int n, tmp;
	scanf("%d", &n);

	p = (int*) malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (p[j] > p[j + 1]) {
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%3d", p[i]);
	}
}