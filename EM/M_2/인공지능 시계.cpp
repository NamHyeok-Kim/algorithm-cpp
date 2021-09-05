#include <iostream>

using namespace std;

int main()
{

	int s, m, h, n;

	cin >> h >> m >> s >> n;
	s += n;


	m += s / 60;
	s %= 60;
	h += m / 60;
	m %= 60;
	h %= 24;

	cout << h << ' ' << m << ' ' << s;
}