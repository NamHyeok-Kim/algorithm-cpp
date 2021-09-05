#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);


	double tmp, cnt, minc, min = 999;


	for (int i = 0; i < 10; i++) {
		scanf("%lf", &tmp);

		cnt = tmp;
		if (tmp < 0) tmp = -tmp;
		if (min > tmp) {
			min = tmp;
			minc = cnt;
		}
		
	}
	printf("%lf\n", minc);
}