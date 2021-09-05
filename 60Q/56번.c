#include <stdio.h>
#include <math.h>

int main()
{
	for (int i = 0; i < 1000; i++) {
		int o = pow(i % 10, 3);
		int t = pow(i / 10 % 10, 3);
		int  th = pow(i / 100, 3);
		if (o + t + th == i)printf("%d\n", i);
	}
}