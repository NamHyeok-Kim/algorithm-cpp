#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	int res[10];
	int o = 0, t = 0, w = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &res[i]);
		if (0 < res[i] && res[i] < 10) {
			o += res[i];
		}
		else if (res[i] < 100) {
			t += res[i];
		}
		else if (res[i] < 1000) {
			w += res[i];
		}
		else {
			printf("´Ù½Ã");
		}
	}
	printf("%d\n%d\n%d", o, t, w);
}