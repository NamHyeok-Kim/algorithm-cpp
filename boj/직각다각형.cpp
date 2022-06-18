#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n, cntx[100000], cnty[100000];
    cin >> n;
    for(int i = 0; i < n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2){
            for(int j = 0; j < abs(x1-x2); j++){
                cntx[j]++;
            }
        }

        if(y1 == y2){
            for(int j = 0; j < abs(y1-y2); j++){
                cnty[j]++;
            }
        }

    }
    int maxx = 0, maxy = 0;
    for(int i = 0; i < 100000; i++){
        if(maxx < )
    }
    int r = max(max_element(cntx, cntx + 100000), (max_element(cnty, cnty + 100000));
}