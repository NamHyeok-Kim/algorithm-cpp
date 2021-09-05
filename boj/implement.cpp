//union - find
#include <iostream>
#include <vector>
#define MAX 2147483647

using namespace std;
int parent[MAX];

int uf_find(int n)
{
    if(n == parent[n])return n; //n 이 루프노드라면 반환
    return parent[n] = uf_find(parent[n]); //아니라면 제귀함수를 통해 루프노드 찾기
}
bool uf_union(int a, int b)
{
    a = uf_find(a);     //부모노드 찾기
    b = uf_find(b);

    if(a == b) return false;        //부모노드가 같다면 true반환(같은 그룹에 속하)
    parent[max(a, b)] = min(a, b);      //다르다면 값이 작은 노드를 큰 노드의 자식노드로
    return true;
}