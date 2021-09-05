#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream ipt;
	ipt.open("input.txt");

	int n;
	ipt >> n;

	cout << (char)((n + 8) % 12 + 65);
	cout << (n + 6) % 10;
}
