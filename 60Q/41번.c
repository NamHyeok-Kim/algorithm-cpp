#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	int n, tmp;
	int score[30], rank[30];
	char name[30][30];

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s %d", &name[i], &score[i]);
	}
	for (int i = 0; i < n; i++) {
		rank[i] = 1;
		for (int j = 0; j < n; j++) {
			if (score[j] > score[i]) rank[i]++;
		}
		printf("%s %d\n", name[i], rank[i]);
	}
}