#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n, o, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &o);
		if (o == n)cnt++;
	}
	printf("%d", cnt);
}