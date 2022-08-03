#include <stdio.h>
#define SWAP(a,b,t) ((t=a),(a=b),(b=t))
int a[20], n, check[20] = { 0 };

void input() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
}
void run() {
    int i, j;
    for (i = 1; i <= n; i++) {
        check[a[i]] = 1;
        if (a[i - 1] > a[i]) { //<-차 번호
            for (j = a[i - 1]; j >= a[i] + 1; j--) {
                if (check[j] == 0) {
                    break;
                }
            }
            if (j != a[i]) {
                printf("%d", a[i]);
                return;
            }
        }
    }
    if (i == n + 1) printf("이상없음");
}

int main()
{
    freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "r", stdin);
    //freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "w", stdout);

    return 0;
}