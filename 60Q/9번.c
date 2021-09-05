#include <stdio.h>

int main()
{
	int u, cnt = 0;
	scanf("%d", &u);

	for (int i = 0; i <= u; i++) {
		if (i % 3 == 0) {
			cnt += i;
		}
	}
	printf("%d", cnt);
}