#include <iostream>

using namespace std;

int main()
{
    int a, t = 0;
    for(int i = 0; i < 5; i++){
        cin >> a;
        t += a*a;
    }
    cout << t % 10;
}