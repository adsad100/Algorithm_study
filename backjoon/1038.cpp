// Backjoon Problem 12728
// Using Queue to avoid time out

#include <iostream>
#include <queue>

using namespace std;

int main(){
//    int test_case;
//    cin >> test_case;
//
//    for(int T = 1; T <= test_case; T++){
//    }
    int input, count = 0;
    cin >> input;
    if(input >= 1023){
        cout << -1 << endl;
    } else {
        queue<long int> q;
        for(int i = 0; i < 10; i++){
            q.push(i);
        }
        
        while(true){
            if(count == input){
                cout << q.front() << endl;
                break;
            }
            
            long int num = q.front();
            q.pop();
            
            for(int i = 0; i < 10; i++){
                if(num % 10 > i) q.push(num * 10 + i);
            }
            count++;
        }
    }
}

