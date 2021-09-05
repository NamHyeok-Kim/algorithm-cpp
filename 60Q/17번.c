#include <stdio.h>

int main()
{
	int cnt = 0;
	int tmp;
	freopen("input.txt", "r", stdin);

	for (int i = 0; ;i++) {
		scanf("%d", &tmp);
		if (tmp == 0) break;
		if (tmp < 0) tmp *= -1;
		cnt += tmp;
	}
	printf("%d\n", cnt);

}