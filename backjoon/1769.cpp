// backjoon 1769
// use only to_string, stoi

#include <iostream>

using namespace std;


int main(){
    string str;
    cin >> str;
    int count = 0;
    
    while(str.length() > 1){
        count++;
        int sum = 0;
        for(int i = 0; i < str.length(); i++)
            sum += str[i] - '0';
        str = to_string(sum);
        if(sum < 10) break;
        
    }
    cout << count << endl;
    if(stoi(str) % 3 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}
