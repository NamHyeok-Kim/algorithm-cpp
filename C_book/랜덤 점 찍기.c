#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

struct point {
	int x;
	int y;
};
int main()
{
	srand(time(NULL));

	struct point p[SIZE];

	for (int i = 0; i < SIZE; i++) {
		p[i].x = rand() % 500;
		p[i].y = rand() % 500;
	}
	HDC hdc = GetWindowDC(GetForegroundWindow());
	for (int i = 0; i < SIZE; i++) {
		Ellipse(hdc, p[i].x, p[i].y, p[i].x + 10, p[i].y + 10);
	}
	return 0;
}