#include <stdio.h>

#define SWAP(a,b,t) ((t=a),(a=b),(b=t))


int main() {
    int A[10], n;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int i, j, f, z, temp, flag = 0;


    scanf("%d", &n);
    for (i = 1; i <= n; i++)scanf("%d", &A[i]);


    for (i = 1; i <= n - 1; i++) {
        f = i;
        for (j = f + 1; j <= n; j++) {
            if (A[f] > A[j])f = j;
        }
        SWAP(A[i], A[f], temp);
    }


    for (i = 1; i <= n; i++)printf("%d ", A[i]);
    return 0;
}