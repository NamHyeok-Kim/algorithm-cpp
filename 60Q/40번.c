#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char num[10];
	char scr[11] = { "YBKEARNDOG" };
	char n[101];
	scanf("%s", n);
	
	for (int i = 0; i < 10; i++) {
		num[i] = i; 
	}
	for (int i = 0; i < strlen(n); i++) {
		int p;
		p = (int)n[i] - 48;
		printf("%c", scr[p]);
	}
}