#include <iostream>
#include <time.h>
using namespace std;
int memo[50];
int fibo_memo(int n)
{
    if (n < 2) return n;
    else if(memo[n]) return memo[n];
    else return memo[n] = fibo_memo(n-1) + fibo_memo(n-2);
}
int fibo(int n)
{
    if (n < 2) return n;
    else return fibo(n-1) + fibo(n-2);
}

int main()
{
    double time;
    clock_t start, end;
    for(int i = 0; i <= 50; i++) {
        double runTime;

        start = clock();
        fibo_memo(i);
        end = clock();
        runTime = (double)(end - start) / CLOCKS_PER_SEC;
        cout << i << "th : " << runTime << ' ';


        start = clock();
        fibo(i);
        end = clock();
        runTime = (double)(end - start) / CLOCKS_PER_SEC;
        cout << runTime << '\n';
    }
    return 0;
}
