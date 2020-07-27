// leetcode 319
// 열려있는 방의 개수는 제곱수와 규칙이 있다. 제곱수의 개수를 체크해주면된다.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        int i;
        for (i = 1; i*i <= n; i++);
        return i-1;
    }
};