#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int ca[2] = {0};
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ca[x%2]++;
    }
    cout << min(ca[0], ca[1]);
}
