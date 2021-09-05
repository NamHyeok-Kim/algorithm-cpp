#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>>adj;

void preorder_traversal(int now)
{
    if(now == '.' - 'A')return;
    cout << char(now + 'A');
    preorder_traversal(adj[now].first);
    preorder_traversal(adj[now].second);
}
void inorder_traversal(int now)
{
    if(now == '.' - 'A')return;
    inorder_traversal(adj[now].first);
    cout << char(now + 'A');
    inorder_traversal(adj[now].second);
}
void postorder_traversal(int now)
{
    if(now == '.' - 'A')return;
    postorder_traversal(adj[now].first);
    postorder_traversal(adj[now].second);
    cout << char(now + 'A');
}

int main()
{
    int N;
    cin >> N;
    adj.resize(N);
    for(int i = 0; i < N; i++){
        char p, n1, n2;
        cin >> p >> n1 >> n2;
        adj[p - 'A'].first = n1 - 'A';
        adj[p - 'A'].second = n2 - 'A';
    }
    preorder_traversal(0);
    cout << '\n';
    inorder_traversal(0);
    cout << '\n';
    postorder_traversal(0);

    return 0;

}