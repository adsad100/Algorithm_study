// Probelm 136 in leetcode
// Using Set Library for count which number is appeared once
// Calculate sum of all numbers in set container subtract to sum of input numbers

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
    set<int> arr;
public:
    int singleNumber(vector<int>& nums) {
        int numsSum = 0, arrSum = 0;
        for(int i = 0; i < nums.size(); i++){
            arr.insert(nums[i]);
            numsSum += nums[i];
        }
        
        for(auto i = arr.begin(); i != arr.end(); i++){
            arrSum += *i * 2;
        }
        
        return arrSum - numsSum;
    }
};