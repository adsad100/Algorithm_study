// backjoon 10972
// using next_permutation in <algorithm> library
// 해당 함수의 리턴 값은 성공하면 1 맨 처음의 배열로 넘어가면 0

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T, num;
    cin >> T;
    
    vector<int> v;
    while(T--){
        cin >> num;
        v.push_back(num);
    }
    
    if(next_permutation(v.begin(), v.end())){
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    } else cout << -1 << endl;
}
