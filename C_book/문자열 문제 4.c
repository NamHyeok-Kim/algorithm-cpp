#include <stdio.h>
#include <string.h>

void blankD(char* user)
{
	int size = strlen(user);

	for (int i = 0; i < size; i++) {
		if (user[i] == ' ' && user[i + 1] == ' ') continue;
		printf("%c", user[i]);
	}
}
int main ()
{
	char user[101] = { 0 };
	printf("ют╥б : ");
	gets_s(user, 99);

	blankD(&user);
}