// Probelm 191 in leetcode
// Nothing special in this answer

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        while(n > 0){
            sum += n % 2;
            n /= 2;
        }
        return sum;
    }
};