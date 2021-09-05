using namespace std;

int main() {

    string parentheses ; //괄호를 받는다
    stack<char> stack1;  //래이저인지 쇠막대기의 끝인지 판단하기 위한 스택
    int cnt = 0;         //결과값

    cin >> parentheses;

    for (int i = 0; i < parentheses.length(); i++) {
        //여는괄호일때
        if (parentheses[i] == '(') {
            stack1.push('(');
        }
            //닫는괄호일때
        else {
            stack1.pop();
            //래이저 판정
            if (parentheses[i - 1] == '(') cnt += stack1.size();
            else cnt++;
        }
    }
    cout << cnt;
}