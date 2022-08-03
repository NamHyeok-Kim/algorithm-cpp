#include <stdio.h>
#define N 20
int n;
int check[N], B[N], R[N], G[N], s;

void run()
{
    int i, j, MAX, g;
    for(i = 1; i <= n; i++){
        g = 0;
        MAX = 0;
        for(j = i-1; j >= 1; j--){
            if (B[j] > B[i] && MAX < R[j]) {
                MAX = R[j];
                g = j;
            }
        }
        R[i] = MAX + 1;
        if(MAX+1 > MAX)s = i;
        G[i] = g;
    }
}
void print()
{
    while(1){
        printf("%d", s);
        s = G[s];
        if(s == 0)break;
    }
}

void input() {
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &G[i],&B[i]);
    }
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    input();
    run();
    print();

}