#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	fstream ipt;
	ipt.open("input.txt");

	int  m, p, s = 0, big = 0;

	for (int i = 0; i < 10; i++) {
		ipt >> m >> p;
		s = s - m + p;
		if (s > big)big = s;
	}
	cout << big;
}