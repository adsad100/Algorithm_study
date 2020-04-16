// backjoon 1735
// using GCD -> 대분수일 경우 분기처리 확실!

#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    int a, b, x, y;
    cin >> a >> b;
    cin >> x >> y;
    
    a *= y; x *= b;
    b *= y;
    a += x;
    if(a > b) cout << a / gcd(a,b) << " " << b / gcd(a,b) << endl;
    else cout << a / gcd(b,a) << " " << b / gcd(b,a) << endl;
}
