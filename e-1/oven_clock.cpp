#include <iostream>

using namespace std;

int main() {
    int h, m, mm;
    cin >> h >> m >> mm;
    cout << h + (m + mm) / 60 <<' '<< (m + mm) % 60;
}