#include <stdio.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int S[3][4] = { 0 }, N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);

		S[0][a]++;
		S[1][b]++;
		S[2][c]++;

		S[0][0] += a;
		S[1][0] += b;
		S[2][0] += c;

	}
	int f = S[0][0], idx = 0;
	for (int i = 0; i < 4; i++) {
		if (f < S[i][0]) {
			f = S[i][0];
			idx = i;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		if (S[i][0] == f) {
			cnt++;
		}
	}

	if (cnt == 1) printf("%d  %d", idx + 1, f);
	else {
		int t = S[0][3];
		for (int i = 0; i < 3; i++) {
			if (t < S[i][3]) {
				t = S[i][3];
				idx = i;
			}
		}
		int cnt = 0;
		for (int i = 0; i < 3; i++) {
			if (S[i][3] == t) {
				cnt++;
			}
		}
		if (cnt == 1) printf("%d  %d", idx + 1, f);
		else {
			for (int i = 0; i < 3; i++) {
				if (t < S[i][2]) {
					t = S[i][2];
					idx = i;
				}
			}
			int cnt = 0;
			for (int i = 0; i < 3; i++) {
				if (S[i][2] == t) {
					cnt++;
				}
			}
			if (cnt == 1) printf("%d  %d", idx + 1, f);
			else {
				for (int i = 0; i < 3; i++) {
					if (t < S[i][1]) {
						t = S[i][1];
						idx = i;
					}
				}
				int cnt = 0;
				for (int i = 0; i < 3; i++) {
					if (S[i][1] == t) {
						cnt++;
					}
				}
			}
		}
	}
	
	return 0;
}