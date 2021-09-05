#include <stdio.h>
#include <string.h>

int main()
{
	char filedel[101] = "C:\\Users\\nextop\\source\\repos\\c\\first\\";
	char tmp[101];

	printf("삭제할 파일 명을 입력하시오 : ");

	gets(tmp);
	strcat(filedel, tmp);
	

	if (remove(filedel) == 0) {
		printf("파일이 삭제되었습니다");
	}
	else {
		printf("삭제가 실패했습니다");
	}
}