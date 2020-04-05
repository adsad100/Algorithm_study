// Probelm 53 in leetcode
// Nothing special in this answer

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        vector<int> arr;
        int sum = 0;
        arr.push_back(n);
        while(true){
            sum += (n % 10) * (n % 10);
            n /= 10;
            if(n == 0){
                if(sum == 1) return true;
                else{
                    for(int i = 0; i < arr.size(); i++){
                        if(arr[i] == sum) return false;
                    }
                    arr.push_back(sum);
                    n = sum;
                    sum = 0;
                }
            }
        }
    }
};