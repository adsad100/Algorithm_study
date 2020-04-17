// backjoon 1712
// A + Bx < Cx 를 만족하는 자연수 x의 최소값

#include <iostream>

using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(c - b <= 0) cout << -1 << endl;
    else{
        cout << a / (c - b) + 1 << endl;
    }
}
