#include <stdio.h>
#include <string.h>

int main()
{
	char user[100] = { 0 };
	int i = 0, count = 1;
	printf("문자열 입력 : ");
	scanf("%s", user);

	while (1) {
		i++;
		if (user[i] != 0) {
			count++;
		}
		else {
			break;
		}
	}
	printf("%d 개", count);
}