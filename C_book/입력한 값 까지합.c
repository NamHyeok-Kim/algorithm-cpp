#include <stdio.h>

int main()
{
	int res, cnt = 0;
	printf("입력할 정수 : ");
	scanf("%d", &res);

	if (res < 0) {
		printf("음수는 안됩니다.\n");
	}
	for (int i = 0; i < res; i++) {
		cnt += i;
	}
	printf("%d 까지 정수의 합은%d 입니다", res, cnt);
	return 0;
}
