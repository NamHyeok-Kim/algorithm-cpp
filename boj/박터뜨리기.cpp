#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int  nn= k*(k+1)/2;
    if((n - nn) % k == 0){
        cout << k-1;
    }
    else if(n < nn){
        cout << -1;
    }
    else{
        cout << k;
    }

}