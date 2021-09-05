#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int yun;
	scanf("%d", &yun);

	if (yun % 4 == 0) {
		printf("À±³â");
	}
	else {
		printf("¤¤¤¤.");
	}
}