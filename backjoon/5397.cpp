// backjoon 5397
// 스택 2개 사용
// front는 커서 앞쪽 문자열, back은 커서 뒤쪽 문자열 저장
// < 일경우 front->back >일 경우 back->front
// -는 front에서 pop
// 이후 back에 모든 값 저장 후 출력

#include <iostream>
#include <stack>

using namespace std;


int main(){
    int T;
    cin >> T;
    for(int test_case = 1; test_case <= T; test_case++){
        string str, ret = "";
        cin >> str;
        
        stack<char> front;
        stack<char> back;
        
        for(int i = 0; i < str.length();i++){
            if(str[i] == '<'){
                if(!front.empty()){
                    back.push(front.top());
                    front.pop();
                }
            }else if(str[i] == '>'){
                if(!back.empty()){
                    front.push(back.top());
                    back.pop();
                }
            }else if(str[i] == '-'){
                if(!front.empty()) front.pop();
            }
            else
                front.push(str[i]);
        }
        
        while(!front.empty()){
            back.push(front.top());
            front.pop();
        }
        
        while(!back.empty()){
            ret += (back.top());
            back.pop();
        }
        cout << ret << endl;
    }
}
