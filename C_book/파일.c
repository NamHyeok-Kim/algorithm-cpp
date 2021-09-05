#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* fin, * fout;
	char ch;
	char in_str[20] = { '\0' };
	int a, cnt;

	fout = fopen("test1.txt", "W");
	
	printf("키보드로 입력한 자료를 디스크에 저장합니다.\n");
	printf("임의의 문자열을 입력하십시오 : ");
	gets(in_str);

	for (a = 0; a < cnt; a++) fputc(in_str[a], fout);

	fclose(fout);

	printf("\n디스크에 저장된 파일명 test1.txt 가 있는 지 확인합니다.\n");
	system("dir/w");
	printf("\ntest1.txt 가 있으면 type 을 이용해 내용을 확인합니다\n");
	system("dir/w");

	printf("\n\n디스크에 저장된 자료를 메모리로 읽어 모니터에 출력합니다.\n");
	fin = fopen("text1.txt", "r");
	if (fin == NULL) {
		printf("파일이 없어 읽어올 수 없습니다");
		return;
	}
	while (ch != EOF) {
		ch = fgetc(fin);
		putchar(ch);
	}
	putchar('\n');

	fclose(fin);

	return 0;
}