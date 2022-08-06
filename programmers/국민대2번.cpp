#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> mask_on, vector<vector<int>>mask_off, vector<vector<int>>mask)
{
    vector<int> answer;
    int maxx = 0, maxy = 0;
    //마스크구역 내부일때
    for(int i = 0; i < mask_on.size(); i++){
        if(mask_on[i][0] > maxx) maxx = mask_on[i][0];
        if(mask_on[i][1] > maxy) maxy = mask_on[i][1];
    }
    //마스크구역 내부일때
    for(int i = 0; i < mask_off.size(); i++){
        //ccw 를 통한 교차판별
    }
    return answer;
}