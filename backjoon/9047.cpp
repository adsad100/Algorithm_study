// BOJ 9047
// Using Library algorithm to use function called sort, greater<>()
// number can change due to 6174

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int test_case;
    cin >> test_case;

    for(int T = 1; T <= test_case; T++){
        int num, max, min, count = 0;
        string str;
        cin >> num;
        while(count < 10){
            str = to_string(num);
            if(str == "6174") break;
            if(str.size() != 4) {
                for(int i = 0; i < 4 - str.size(); i++){
                    str.push_back('0');
                }
            }
            sort(str.begin(), str.end());
            min = stoi(str);
            sort(str.begin(), str.end(), greater<int>());
            max = stoi(str);
            num = max - min;
            count++;
        }
        cout << count << endl;
    }
}

