// backjoon 2355
// use long long int for calculate
// 두 숫자 내에 있는 수들의 합이기 때문에 두 수의 평균 * 갯수 형식으로 계산

#include <iostream>

using namespace std;

int main(){
    
    long long a,b;
    cin >> a >> b;
    
    cout << (a + b) * (abs(b - a) + 1) / 2  << endl;
}
