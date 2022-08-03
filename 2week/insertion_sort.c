#include <stdio.h>

#define N 10
int a[N], n;

void input()
{
    scanf("%d", &n);
    for(int i = 1; i <= N; i++){
        scanf("%d", &a[i]);
    }
}
int main()
{
    freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "r", stdin);
    //freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "w", stdout);
    int t;
    input();
    a[0] = -987654321;

    for(int i = 1; i < n; i++) {
        t = a[i];

        for (int j = i - 1;; j--) {
            if (a[j] > t)
                a[j + 1] = a[j];
            else {
                a[j] = t;
                break;
            }
        }
    }

    return 0;
}