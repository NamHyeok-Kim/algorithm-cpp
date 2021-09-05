#include <stdio.h>

int main()
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];

	printf("원본 파일 이름 : ");
	scanf("%s%*c", file1);

	printf("복사 파일 이름 : ");
	scanf("%s%*c", file2);

	//첫 번쨰 파일을 읽기 모드로 연다.
	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "원본 파일%s을 열 수 없습니다", file1);
		exit(1);
	}

	//두 번째 파일을 쓰기 모드로 연다.
	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf("복사 파일 %s을 열 수 없습니다", file2);
		exit(1);
	}
	int c;
	//fp1에서 한 글자씩 읽어서 fp2로 쓴다
	while ((c = fgetc(fp1)) != 0) {
		fputc(c, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}