#include <stdio.h>

int main()
{
	int e, m, s;
	scanf("%d %d %d", &e, &m, &s);

	int p = (e + m + s) / 3;
	printf("%d %d", e + m + s, p);

	if (p > 90) {
		printf("  수");
	}
	else if (p > 80) {
		printf("  우");
	}
	else if (p > 70) {
		printf("  미");
	}
	else if (p > 60) {
		printf("  양");
	}
	else {
		printf("  가");
	}
}