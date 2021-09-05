#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int n, bcnt = 0, scnt = 0, n_before, max = 0;
	int s;

	scanf("%d", &s);

	for (int i = 0; i < s; i++) {
		scanf("%d", &n);
		if (i == 0) n_before = n;
		if (n >= n_before) bcnt++;
		else {
			if (max < bcnt) max = bcnt;
			bcnt = 1;
		}
		if (n <= n_before) scnt++;
		else {
			if (max < scnt) max = scnt;
			scnt = 1;
		}
		n_before = n;
	}

	if (max < bcnt) max = bcnt;
	if (max < scnt) max = scnt;
	printf("%d", max);
}