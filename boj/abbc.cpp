#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main()
{
    string abbc;
    int ans = 0, b = 0, a = 0;
    cin >> abbc;
    queue<int>q;

    for(int i = 0; i < abbc.size(); i++){
        if(abbc[i] == 'B'){
            b++;
            q.push(i);
        }
        if(abbc[i] == 'C' && b > 0){
            b--;
            ans++;
            abbc[q.front()] = 'C';
            q.pop();
        }
    }
    for(int i = 0; i < abbc.size(); i++){
        if(abbc[i] == 'A') a++;
        if(abbc[i] == 'B' && a > 0){
            a--;
            ans++;
        }
    }
    cout << ans;
}
