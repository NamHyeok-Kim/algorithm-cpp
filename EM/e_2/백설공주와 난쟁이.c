#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int a[10];

	for (int i = 0; i < 7; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 6; j++) {
			if(a[j] < a[j+1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	printf("%d\n%d", a[0], a[1]);
}