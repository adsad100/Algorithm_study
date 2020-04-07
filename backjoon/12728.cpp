// Backjoon Problem 12728
// Use Mathmatical Formula about that problem 

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    
    vector<int> v;
    v.push_back(2);
    v.push_back(6);
    for(int i = 1; i < 102; i++){
        v.push_back((6 * v[i] - 4 * v[i - 1] + 10000) % 1000);
    }
    
    for(int T = 1; T <= test_case; T++){
        int n;
        cin >> n;
        
        if (n > 102) {
            n %= 100;
            n = (n < 3) ? n + 100 : n;
        }
        
        printf("Case #%d: %03d\n", T, v[n] - 1);
    }
}

