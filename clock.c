#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t start, finish;
    double duration;
    start = clock();

    for(int i = 0; i < 10; i++)

    finish = clock();
    duration = (double)(finish-start)/CLOCKS_PER_SEC;
    printf("%lf", duration);
    return 0;
}

