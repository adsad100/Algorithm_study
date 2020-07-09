// Problem 1 in leetcode
// Using Map library Sum of int

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            int car = target - nums[i];
            if(m.find(car) != m.end()){
                ans.push_back(m.find(car)->second);
                ans.push_back(i);   
                break;
            }
            m.insert(make_pair(nums[i], i));
        }
        
        return ans;
    }
};