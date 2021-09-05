#include <stdio.h>
#include <string.h>

void main()
{
    char text[30];
    char str[100];
    int temp[30];
    int i;
    int j;
    int ok = 0;
    for (i = 0; i < 25; i++)
    {
        text[i] = i + 97;
    }

    fgets(str, sizeof(str), stdin);

    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < strlen(str); j++)
        {
            if (text[i] == str[j])
            {
                ok++;
                temp[i] = ok;
            }
        }
        if (ok == 0)
        {
            temp[i] = 0;
        }
        ok = 0;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%2c", i + 97);
    }
    printf("\n");
    for (i = 0; i < 26; i++) {
        printf("%2d", temp[i]);
    }
}
