// Problem 7 in leetcode
// 해당 정수를 문자열로 바꾼 뒤 음수인지 확인
// 이후 다른 문자열에 reverse하게 저장한 뒤 정수형 변수에 입력
// 이 과정에서 out of range exception 발생할 수 있기 때문에 예외처리

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        string ret = "";
        bool minus = str[0] == '-'? true: false;
        
        int startIndex = minus? 1 : 0;
        
        for(int i = startIndex; i < str.size(); i++){
            ret = str[i] + ret;
        }
        int num;
        try {
            num = stoi(ret);
        } catch (const std::exception& expn) {
            return 0;
        }
        
        if(minus) return -num;
        return num;
    }
};