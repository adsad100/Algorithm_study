// backjoon 1598
// 원숭이 사이 거리 구하기
// 고려해야할점 
// 1. i번째 행은 4k + i의 값을 갖는다. 나머지 연산을 사용할 때 %4만 하게 되면 4번 째 행 값을 구할 때 문제가 발생한다.
// 2. j번째 열은 나누기 연산을 사용하면 된다. 하지만 4의 배수는 j - 1 열에 있다. (ex. 1,2,3 / 4 = 0, 4/4 = 1 하지만 모두 0번째 열에 있다.)

#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    
    int width = abs(((m -1)/4) - ((n - 1)/4));
    int height;
    
    int n_height = n % 4 == 0 ? 4 : n % 4;
    int m_height = m % 4 == 0 ? 4 : m % 4;
    
    cout << width + abs(n_height - m_height) << endl;
}
