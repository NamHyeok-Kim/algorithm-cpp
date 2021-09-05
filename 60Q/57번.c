#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int house[101] = { 0 };
	int tmp;
	while(1) {
		scanf("%d", &tmp);
		if (tmp == 0) break;
		house[tmp]++;
	}
	while (1) {
		scanf("%d", &tmp);
		if (tmp == 0) break;
		house[tmp]++;
	}
	for (int i = 0; i <= 100; i++) {
		if (house[i] > 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
	for (int i = 0; i <= 100; i++) {
		if (house[i] >= 1) {
			printf("%d ", i);
		}
	}
}