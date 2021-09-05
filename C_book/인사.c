#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	srand(time(NULL));
	
	char insa[3][20] = { "²Î", "²Î", "´çÃ·"};
	char res[101];
	printf("ÀÌ¸§ÀÔ·Â : ");
	scanf("%s", &res);
	
	int r;
	r = rand() % 3;

	printf("%s ´Ô %s", res, insa[r]);
}