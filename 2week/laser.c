#include <algorithm>
#include <stdio.h>
#include <stdbool.h>
#define N 15

using namespace std;

int G[N], R[N], n;
struct abc {
    int num;  //내 건물 번호
    int v1;  //내 건물 높이
    int v2;   //내 건물에서 레이저 쐈을때 만나는 건물 번호
}S[N], X[N];   //S는 스택   X는 출력물
void input() {
    int i;

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &G[i]);
    }
}
void run() {
    int i, j, top=0,cnt=0;
    for (i = 1; i <= n; i++) {
        //stack push
        while (1) {
            if(top == 0 || S[top].v1 > G[i])break;   //비었거나 전 건물이 더 높을때
            if (S[top].v1 < G[i]) {
                X[++cnt] = S[top];
                top--;
            }
        }
        top++;
        S[top].v2 = S[top - 1].num;  //내 건물이 스택에 들어갈때 레이저 만난 건물 번호
        S[top].v1 = G[i];   // 내 건물 높이
        S[top].num = i;  // 내 건물 번호
    }

}
void print() {
    int i;
    printf("num  v1   v2n");
    for (i = 1; i <= n; i++) {
        printf("%d %d %dn", X[i].num, X[i].v1, X[i].v2);
    }
}
bool compare(const &abc x, const abc ㅛ)
{
    return x.num <
}
int main() {
    freopen("input.txt", "r", stdin);


    input();
    run();
    sort(X+1, X+N+1, compare)
    print();

    return 0;
}
