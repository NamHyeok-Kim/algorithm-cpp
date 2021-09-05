#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// vector<vector<int>> A(s,vector<int>(s));

int main()
{
	ifstream fin;
	fin.open("input.txt");
	
	int s;
	int tmp;
	fin >> s;

	vector<int> N(s);

	for(int i = 0; i < s; i++) N[i] = i + 1;

	for (int i = 0; i < s; i++) {//5
		int ticket;
		fin >> ticket;
		int tmp2 = N[i];
		for (int j = i; j > i - ticket; j--) {//6
			N[j] = N[j - 1];
		}
		N[i - ticket] = tmp2;
	}
	cout << endl;

	
	for (int i = 0; i < s; i++){
		cout << N[i] << " ";
	}
}