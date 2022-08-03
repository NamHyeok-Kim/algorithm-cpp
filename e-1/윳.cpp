#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 3; i++){
        int t;
        for(int i = 0; i < 3; i++){
            int a;
            cin >> a;
            t+=a;
        }
        if(t == 1) cout << 'A';
        if(t == 2) cout << 'B';
        if(t == 3) cout << 'C';
        if(t == 4) cout << 'D';
        if(t == 0) cout << 'E';

    }
}