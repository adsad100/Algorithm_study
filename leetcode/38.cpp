// Problem 38 in leetcode
// 유명한 문제 중 하나로 해당 숫자를 앞에서부터 읽으면서 숫자와 갯수를 새로운 숫자로 하여 계속 수행하는 문제
// 문자열 처리하는 부분에서 -'0' 으롤 char을 int를 처리, to_string으로 int를 string으로 처리

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        vector<string> dp;
        dp.push_back("1");
            for(int i = 0; i < n; i++){
            string str;
            int num = dp[i][0] - '0';
            int count = 0;
            for(int j = 0; j < dp[i].size(); j++){
                if(dp[i][j] - '0' == num) count++;
                else{
                    str += to_string(count);
                    str += to_string(num);
                    num = dp[i][j] - '0';
                    count = 1;
                }

                if(j + 1 == dp[i].size()){
                    str += to_string(count);
                    str += to_string(num);
                }
            }
            dp.push_back(str);
        }
            return dp[n - 1];
        }
};