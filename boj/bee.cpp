#include <iostream>

using namespace std;

int main() {
    int N, M, left = 0, right = 1000000000, result;
    cin >> N >> M;
    const int n = N;
    int tree[n];

    for (int i = 0; i < N; i++) {
        cin >> tree[i];
    }

    while (left < right) {
        int mid = (left + right)/2;
        int sum = 0;
        for (int j = 0; j < N; j++) {
            if (tree[j] > mid) sum += tree[j] - mid;
        }
        if(sum == M) result = mid;
        else if(sum > M) left = mid + 1;
        else if(sum < M) right = mid;
    }
    cout << result;
    return 0;
}
