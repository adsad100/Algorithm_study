// backjoon 2869
// 올라가는 길이 a, 내려가는 길이 b, 전체 길이 v, 도착할때까지의 날짜
// ax - b(x - 1) >= v
// v >= (c-b) / (a-b) -> v는 정수가 되야한다

#include <iostream>

using namespace std;

int main(){
    int a, b, v;
    int ret;
    cin >> a >> b >> v;
    
    ret = (v - b) % (a - b) == 0? (v - b) / (a - b) : (v - b) / (a - b) + 1;
    cout << ret << endl;
}
