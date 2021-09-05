#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100]; //s1 받는 문자열, s2 소문자 변형해서 받는 문자형;
    int s3[255] = { 0 }, i, len, len2;//s3문자열 초기화, len s1문자열 길이 len s2문자열 길이;
    int diff = 'a' - 'A';//대문자와 소문자 값 차이

    printf("문자열 입력:");
    gets(s1);

    len = strlen(s1);//(s1 문자열 길이)

    for (i = 0; i < len; i++)
    {
        if (('A' <= s1[i]) && (s1[i] <= 'Z'))//문자가 대문자이면 소문자로 변경
            s2[i] = s1[i] + diff;
        else if (('a' <= s2[i]) && (s2[i] <= 'z'))//문자가 소문자이면 그대로 출력
            s2[i] = s1[i];
        else//일반 문자일때도 그대로 출력
            s2[i] = s1[i];
    }
    len2 = strlen(s2);//s2 문자열 길이

    for (i = 0; i < len2; i++)
    {
        s3[s2[i]]++; // 들어있는 문자 개수 확인
    }

    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%2c", i);
    }
    printf("\n");
    for (i = 'a'; i <= 'z'; i++) {
        printf("%2d", s3[i]);
    }
}