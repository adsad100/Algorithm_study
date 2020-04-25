// leetcode 238
// 배열 3개 이용
// left : 해당 요소를 제외하고 왼쪽 값들의 곱
// right : 해당 요소를 제외하고 오른쪽 값들의 곱
// ret : 마지막으로 left와 right 값들의 곱을 저장하고 반환할 배열

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> ret;

        int mul = 1;
        for(int i = 0; i < nums.size(); i++){
            left.push_back(mul);
            mul *= nums[i];
        }

        mul = 1;

        for(int i = nums.size() - 1; i >= 0; i--){
            right.push_back(mul);
            mul *= nums[i];
        }

        for(int i = 0;i < left.size(); i++) {
            ret.push_back(left[i] * right[right.size() - i - 1]);
        }
        return ret;
    }
};