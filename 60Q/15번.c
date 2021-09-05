#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int c;
	int cnt = 0, sum = 0;
	

	for (int i = 0; ; i++) {
		if(scanf("%d", &c) == EOF) break;
		if (c >= 60) {
			cnt++;
			sum += c;
		}
	}
	printf("%d\n", cnt);
	printf("%.2lf", (double)sum / cnt);
}