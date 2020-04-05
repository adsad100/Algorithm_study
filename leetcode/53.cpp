// Probelm 53 in leetcode
// Using Kadane's algorithm for get Maximum sub array

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], maxValue = nums[0], ret = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            maxValue += nums[i];
            maxValue = max(maxValue, nums[i]);
            if(maxValue > ret) ret = maxValue;
        }
        
        return ret;
    }
};