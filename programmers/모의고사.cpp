#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int user1[5] = {1, 2, 3, 4, 5},
    user2[10] = {2, 1, 2, 3, 2, 4, 2, 5, 2, 1},
    user3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int>cnt;
    cnt.resize(3);

    for(int i = 0; i < 10000; i++) {
        if(user1[i % 5] == answers[i])cnt[0]++;
        if(user2[i % 10] == answers[i])cnt[1]++;
        if(user3[i % 10] == answers[i])cnt[2]++;
    }
    int maxx = *max_element(cnt.begin(), cnt.end());
    for (int i = 0; i < 3; i++)
        if (maxx == cnt[i]) answer.push_back(i + 1);
    return answer;
}