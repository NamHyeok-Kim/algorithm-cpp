#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> renum;
    for(int i = 0; i < numbers.size(); i++){
        renum.push_back(to_string(numbers[i]));

    }
    return answer;
}