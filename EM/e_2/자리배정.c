#include <stdio.h>						  
#include <stdlib.h>						  
										  
int main()								  
{										  
	freopen("input.txt", "r", stdin);	  
										  
	int c, r, cnt = 0, sign = 1, n;		  
	int x = 0, y = 0;					  
										  
	scanf("%d %d", &c, &r);				  
	scanf("%d", &n);					  
										  
	int out = 0;						  
	int xlen = c - 1, ylen = r;			  
										  
	y = 0; x = 1;						  
	for (; cnt < c * r ;) {				  
		for (int j = 0; j < ylen; ++j) {  
			y += sign;					  
			cnt++;						  
			if (cnt == n) {				  
				out = 1;				  
				break;					  
			}							  
		}								  
		ylen--;							  
		if (out) break;					  
		for (int k = 0; k < xlen; ++k) {  
			x += sign;					  
			cnt++;						  
			if (cnt == n) {				  
				out = 1;				  
				break;					  
			}							  
		}								  
		xlen--;							  
		if (out) break;					  
		sign *= -1;						  
	}									  
	if (cnt >= c * r) printf("0\n");	  
	else printf("%d %d", x, y);			  
}										  