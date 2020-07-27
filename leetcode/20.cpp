// Problem 20 in leetcode
// Using stack for find correct parenthese
// stack에 쌓아놓고 top을 통해 올바른 짝인지 확인

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        bool flag = true;
        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case '(': case '{': case '[':
                    stack.push_back(s[i]);
                    break;
                case ')':
                    if(!stack.empty() && stack[stack.size() -1] == '(')
                        stack.pop_back();
                    else flag = false;
                    break;
                case '}':
                    if(!stack.empty() && stack[stack.size() -1] == '{')
                        stack.pop_back();
                    else flag = false;
                    break;
                case ']':
                    if(!stack.empty() && stack[stack.size() -1] == '[')
                        stack.pop_back();
                    else flag = false;
                    break;
            }
            if(!flag) return flag;
        }
        if(stack.empty()) return true;
        else return false;
    }
};