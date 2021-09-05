#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main()
{
	ifstream ipt;
	ipt.open("input.txt");

	int A[10], B[10], cnt = 0;

	for (int i = 0; i < 10; i++)ipt >> A[i];
	for (int i = 0; i < 10; i++)ipt >> B[i];

	for (int i = 0; i < 10; i++) {
		if (A[i] > B[i])cnt += 1;
		else if (A[i] < B[i])cnt -= 1;
		else cnt += 0;
	}
	if (cnt < 0) cout << "B";
	else if (cnt > 0) cout << "A";
	else cout << "D";
}