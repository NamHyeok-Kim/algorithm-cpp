#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, maxi = 0, p = 0;
    for(int i = 0; i < 4; i++){
        cin >> a >> b;
        p += b - a;
        maxi = max(p, maxi);
    }
    cout << maxi;
}