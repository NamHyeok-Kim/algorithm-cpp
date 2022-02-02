#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<vector<string>> newQuery;
vector<vector<string>> newInfo;


void cutstr(string cutedStr, vector<string> &newArr)
{
    istringstream ss(cutedStr);
    string ipt;
    while (getline(ss, ipt, ' ')){
        if(ipt == "")continue;
        newArr.push_back(ipt);
    }
}

auto eraseAnd(string queryi, int an)
{
    int size = queryi.size();
    for(int i = 0; i < size - 4; i++) {
        if(i > queryi.size())break;
        if (queryi[i] == 'a' && queryi[i + 1] == 'n' && queryi[i + 2] == 'd')
            queryi.erase(i, 3);
    }
    cutstr(queryi, newQuery[an]);
}

vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> answer(info.size(), 0);
    newQuery.resize(query.size());
    newInfo.resize(info.size());


    for(int i = 0; i < query.size(); i++) eraseAnd(query[i], i);

    for(int i = 0; i < info.size(); i++) cutstr(info[i], newInfo[i]);

    for(int i = 0; i < query.size(); i++){
        for(int j = 0; j < newInfo.size(); j++){
            bool r = true;
            for (int k = 0; k < 4; k++) {
                if (newQuery[i][k] == "-") continue;
                else if (newInfo[j][k] != newQuery[i][k]) r = false;
            }
            if (r && stoi(newQuery[i][4]) <= stoi(newInfo[j][4])) answer[i]++;
        }
    }
    return answer;
}
int main()
{
    solution({"python frontend senior chicken 210","python frontend senior chicken 210" , "python frontend senior chicken 150", "cpp backend senior pizza 260", "java backend junior chicken 80", "python backend senior chicken 50"}, {"- and - and - and - 270", "- and - and - and - 270", "- and - and - and - 270", "- and - and - and - 270", "- and - and - and - 270", "- and - and - and - 270"});
}