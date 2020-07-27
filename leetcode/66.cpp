// Probelm 66 in leetcode
// 배열에서의 덧셈 나타내기
// 뒤에서부터 연산하여 올림 수가 있으면 올림수 표현 

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int upper = 1;
        
        for(int i = size - 1; i >= 0; i--){
            digits[i] += upper;
            upper = digits[i] / 10;
            digits[i] %= 10;
        }
        if(upper == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};