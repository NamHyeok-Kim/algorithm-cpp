#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    vector<vector<int>> p;
    p.resize(2, vector<int>(3));
    for(int i = 0; i < 3; i++){
        int a, b;
        cin >> p[0][i] >> p[1][i];
    }
    sort(p[0].begin(), p[0].end());
    sort(p[1].begin(), p[1].end());


    for(int i = 0; i < 3; i++){
        if(p[0][2] != p[0][1])ans.push_back(p[0][2]);
        if(p[0][0] != p[0][1])ans.push_back(p[0][0]);
        if(p[1][2] != p[0][1])ans.push_back(p[1][2]);
        if(p[1][0] != p[0][1])ans.push_back(p[1][0]);

    }

    return ans;
}