#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int i, tmp, cnt = 0;
	int kg[101];
	for (int i = 0;; i++) {
		if (scanf("%d", &kg[i]) == EOF) break;
		cnt++;
	}
	for (int j = 0; j < cnt; j++) {
		for (int k = 0; k < cnt - 1; k++) {
			if (kg[k] < kg[k + 1]) {
				tmp = kg[k];
				kg[k] = kg[k + 1];
				kg[k + 1] = tmp;
			}
		}
	}
	printf("%d", kg[0] - kg[cnt - 1]);
}