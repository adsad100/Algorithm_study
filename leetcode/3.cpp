// Problem 3 in leetcode
// 문자열 저장하고 찾고 이전 문자열 모두 삭제하는 방식
// 느리다...

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str = "", s = "dvdf";
    int maxValue = 0;
    for(int i = 0; i < s.size(); i++){
        if(str.find(s[i]) != string::npos){
            maxValue = max(int(str.length()), maxValue);
            str.erase(0, str.find(s[i]) + 1);
            cout << str << endl;
        }
        str = str + s[i];
    }
    maxValue = max(int(str.length()), maxValue);
    cout << maxValue << endl;
    
}