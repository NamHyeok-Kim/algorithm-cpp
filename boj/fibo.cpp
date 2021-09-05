#include <iostream>

using namespace std;
long long memo[50];

long long fibo(int n)
{
    if (n < 2)
        return n;

    else if(memo[n])
        return memo[n];

    else
        return memo[n] = fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}