#include <stdio.h>
#define N 20
int a[20], n;
int B[N], R[N];

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &R[i]);
    }
}
int print(){
    int i;
    for(i = 0; i < n; i++){
        printf("%3d", i);
    }
    printf("\n");
    for(i = 0; i < n; i++){
        printf("3d", R[i]);
    }
}
int main()
{
    freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "r", stdin);
    //freopen("/Users/eugene/eugene-lab/algorithm-cpp/2week/input.txt", "w", stdout);
    input();
    int i, j, MAX;
    for(i = 1; i < N; i++){
        MAX = 0;
        for(j = i - 1; j >= 1; j--){
            if(B[j] < B[i] && R[j] > MAX){
                MAX = R[j];
            }
        }
        R[i] = MAX + 1;
    }

    return 0;
}