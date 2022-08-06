#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, cn, i;
    cin >> n;
    cn = n;
    for(i = 1; i < cn; i++){
        if(n % 3 == 0) n /= 3;
        else if(n % 2 == 0) n/=2;
        else n -= 1;
        if(n == 1) break;
    }
    cout << i;
}