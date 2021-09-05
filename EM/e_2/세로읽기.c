#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);
	
	char a[5][16] = { 0 };

	for (int i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c", a[j][i]);
		}
	}
}