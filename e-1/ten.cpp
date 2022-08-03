#include <iostream>

using namespace std;

int main()
{
    int n, cnt=0;
    int a[5];
    cin >> n;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        if(a[i] == n)cnt++;
    }
    cout << cnt;
}