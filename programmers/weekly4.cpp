#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;
vector<vector<pair<string, int>>> table2(5);


string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    //2D vector (fin)
    vector<vector<string>> job(5);
    vector<pair<string, int>> languageScore = {{"SI", 0}, {"CONTENTS", 0}, {"HARDWARE", 0}, {"PORTAL", 0}, {"GAME", 0}};

    for(int i = 0; i < table.size(); i++){
        string ipt;
        istringstream table_ipt(table[i]);

        //간단한 배열 형태
        while(table_ipt >> ipt){
            job[i].push_back(ipt);
        }

        //점수계산
        for(int j = 1; j < table.size(); j++){
            for(int k = 0; k < languages.size(); k++){

                if(job[i][j] == languages[k]){
                    languageScore[i].second += preference[k] * (6 - j);
                }

            }
        }
    }

    //최댓값
    int max = 0;
    string answer;
    for(int i = 0; i < 5; i++){
        // 1. 점수순
        if(max < languageScore[i].second){answer = languageScore[i].first; max = languageScore[i].second;}
        // 2. 사전순
        if(max == languageScore[i].second){
            if(languageScore[i].first < answer){answer = languageScore[i].first; max = languageScore[i].second;}
        }
    }
    return answer;
}

int main()
{
    vector<string>table = {"SI JAVA JAVASCRIPT SQL PYTHON C#", "CONTENTS JAVASCRIPT JAVA PYTHON SQL C++", "HARDWARE C C++ PYTHON JAVA JAVASCRIPT", "PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP", "GAME C++ C# JAVASCRIPT C JAVA"};
    vector<string> language = {"PYTHON", "C++", "SQL"};
    vector<int> preference = {7, 5, 5};

    cout << solution(table, language, preference);
}