#include <stdio.h>

int main()
{
	int o, t;
	scanf("%d %d", &o, &t);
	if (o + t < 140) {
		printf("%d 불합격", o + t);
	}
	else {
		printf("%d 합격", o + t);
	}
	return 0;
}