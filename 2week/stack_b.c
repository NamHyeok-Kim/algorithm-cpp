#include <stdio.h>
#include <string.h>
char a[20];
int n;
int main()
{
    freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "r", stdin);
    //freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "w", stdout);

    int tot = 0;
    for(int i = 0;i < strlen(a) ;i++){
        scanf("%s", a);
        if (a[i] == '(')tot+=1;
        else {
            tot-=1;
            if(tot < 0)break;
        }

    }
    tot == 0 ? printf("yes") : printf("no");
    return 0;
}