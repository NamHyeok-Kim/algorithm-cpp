#include <iostream>
#include <vector>

using namespace std;

int main()
{

    char a[3][3], b[3][3], bb[26] = {0};
    int g = 0, y = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(i < 3) {
                cin >> a[i][j];
            }
            else {
                cin >> b[i - 3][j];
                bb[b[i - 3][j] - 65]++;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] == b[i][j]) {
                g++;
                bb[a[i][j] -65]--;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] != b[i][j] && bb[a[i][j] - 65] != 0){
                y++;
                bb[a[i][j] -65]--;
            }
        }
    }
    cout << g << '\n' << y;
}