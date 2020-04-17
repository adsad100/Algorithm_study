// backjoon 1309
// using dp for problem
// 해당 점화식 : a[n] = a[n - 1] * 2 + a[n - 2]

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int num;
    vector<int> arr;
    arr = {3,7,17};
    cin >> num;
    
    for(int i = 3; arr.size() <= num; i++){
        arr.push_back((arr[i - 2] +  (2 * arr[i - 1]) % 9901) % 9901);
    }
    
    cout << arr[num - 1] << endl;
}
