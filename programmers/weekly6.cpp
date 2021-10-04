#include <string>
#include <vector>

using namespace std;

struct boxer{
    float wr;
    int bww;
    int weight;
    int num;
};

bool change(boxer a, boxer b) // a, b 는 i j
{
    if(a.wr < b.wr) return true;
    if(a.wr == b.wr){
        if(a.bww > b.bww) return true;
        if(a.bww == b.bww) {
            if(a.weight > b.weight)return true;
            if(a.weight == b.weight){
                if(a.num < b.num)return true;
            }
        }
    }
    return false;
}
vector<int> solution(vector<int> weights, vector<string> head2head)
{
    vector<int> answer;
    vector<boxer> boxers;
    inr bww = 0;
    for(int i = 0; i < weights.size(); i++){
        for (int j = 0; j < weights.size(); j++) {
            if(head2head[i][j] == 'W' && weights[i] < weights[j]){
                bww ++
            }
        }
        boxers.push_back({count(head2head[i].begin(), head2head[i].end(), "W")/weights.size() - 1, bww, i + 1);
    }

    sort(boxers.begin(), boxers.end(), change)
    for (boxer i : boxers) answers.push_back(i.idx);
    return answer;
    }
}
int main()
{
    vector<int> weights = { 60, 70, 60 };
    vector<string> head2head = { "NNN", "NNN", "NNN" };
    vector<int> answers = solution(weights,head2head);
    for (int answer : answers) { cout << answer << " ";
    }
    cout << "\n"; return 0;
}

