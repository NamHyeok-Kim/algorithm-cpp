#include <stdio.h>
#include <string.h>

void change(char *ress)
{
	int size = strlen(ress);
	for (int i = 0; i < size; i++) {
		ress[i] -= 'a' - 'A';
		printf("%c", ress[i]);
	}
}
int main()
{
	char ress[101] = { 0 };

	printf("문자열 입력 : ");
	scanf("%s", ress);

	change(&ress);
}