// Probelm 121 in leetcode
// Only Remember least data in numbers and calculate profit and save data 

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX, ret = 0;
        for(int i = 0; i < prices.size(); i++){
            if(min > prices[i]) min = prices[i];
            
            if(ret < prices[i] - min) ret = prices[i] - min;
        }
        
        return ret;
    }
};