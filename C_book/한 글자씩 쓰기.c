#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("alphabet.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "파일 alphabet.txt를 열 수 없습니다.\n");
		exit(1);
	}

	char c;
	for (c = 'a'; c <= 'z'; c++) {
		fputc(c, fp);
	}

	fclose(fp);
	return 0;
}