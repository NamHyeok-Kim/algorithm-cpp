#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int moon;

	//사용자에게 값 받기
	for (int i = 0;; i++) {
		//printf("입력 : ");
		scanf("%d", &moon);
		//0 입력하면 종료
		if (moon == 0) {
			break;
		}
		if (moon > 12) {
			printf("\n99");
		}
		printf("\n %d", month[moon]);
	}
	
	

}