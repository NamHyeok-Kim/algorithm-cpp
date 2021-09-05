#include <stdio.h>
#define n %2

int main()
{
	freopen("input.txt", "r", stdin);

	int a, cnt = 0;
	scanf("%d", &a);

	if (a n == 0) {
		for (int i = 0; i <= a; i++) {
			if (i n == 0) {
				cnt += i;
			}
		}
		
	}
	else{
		for (int i = 0; i <= a; i++) {
			if (i n != 0) {
				cnt += i;
			}
		}
	}
	printf("%d", cnt);
}