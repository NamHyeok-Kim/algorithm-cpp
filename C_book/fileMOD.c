#include <stdio.h>
#include <string.h>

typedef struct fileC {
	FILE* fp;
}read;


void FileWrite()
{
	char name[100];
	
	read WF;

	while(1){
		char file_name[101] = { 0 };
		printf("만들 파일 명 : ");
		scanf("%s%*c", file_name);

		if (file_name[0] == 's') break;

		WF.fp = fopen(file_name, "w");
		if (WF.fp == NULL) {
			fprintf(stderr, "파일을 열 수 없습니다. \n");
			exit(0);
		}
		printf("%s파일에 쓸 이름 : ", file_name);
		gets(name);
		fputs(name, WF.fp);

		fclose(WF.fp);
	}
}

void FileOpen()
{
	read FR;
	char size[20];
	char opfi[101];

	printf("열 파일 이름 : ");
	scanf("%s%*c", opfi);

	FR.fp = fopen(opfi, "r");

	if (FR.fp == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다");
		exit(0);
	}

	fgets(size, 10, FR.fp);
	printf(" %s\n", size);
}
void FileDel()
{
	while(1){
		char DelRes[100] = { "C:\\Users\\Administrator\\source\\repos\\c\\first\\" };
		char tmp[20];
		printf("삭제할 파일 명을 입력하세요 : ");
		gets(tmp);
		if (tmp[0] == 's') break;

		strcat(DelRes, tmp);
		printf("\n[ %s ]\n", DelRes);
		
		int del = remove(DelRes);
		if (del == -1) {
			printf("\n삭제실패\n");
		}
		else {
			printf("\n삭제성공\n");
		}
	}
}
int main()
{
	FileWrite();
	FileOpen();
	FileDel();
}