// backjoon 2493
// use stack and pair container

#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main(){
//    int test_case;
//    cin >> test_case;
//
//    for(int T = 1; T <= test_case; T++){
//    }
    int t;
    cin >> t;
    
    int count = 0;
    stack<pair<int, int>> s;
    pair<int, int> p;
    int input;
    
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    while(count < t){
        cin >> input;
        p = make_pair(count+1, input);

        while(!s.empty()){
            if(s.top().second > input){
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }

        if(s.empty()) cout << "0 ";
        
        s.push(p);
        count++;
    }
    cout << endl;

}

