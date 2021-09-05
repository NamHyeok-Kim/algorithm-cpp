#include <stdio.h>

int main()
{
	int size[11];
	char opfi[101];

	printf("열 파일 이름 : ");
	scanf("%s", opfi);

	FILE* fp;
	fp = fopen(opfi, "r");

	if (fp == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다");
		exit (0);
	}

	fgets(size, 10, fp);
	printf("%s", size);
}