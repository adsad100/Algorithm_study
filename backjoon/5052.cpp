// backjoon 5052
// Using Trie
// Input Sorted Array into Trie 
// In input procedure, if last node already had childnode and finished string, return false to correct answer
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Trie{
    Trie *next[10];
    bool existChild = false;
    bool isFinished = false;
public:
    Trie(){
        for(int i = 0; i < 10; i++){
            next[i] = NULL;
        }
    }
    
    bool insert(string input){
        if(input == "") {
            isFinished = true;
            
            if(existChild) return false;
            else return true;
        }
        
        int nextKey = input[0] - '0';
        
        if(!next[nextKey]) next[nextKey] = new Trie();
        
        existChild = true;
        
        input.erase(input.begin());
        
        bool get = next[nextKey]->insert(input);
        
        return !isFinished && get;
    }
};

int main(){
    
    int T;
    cin >> T;
    for(int test_case = 0; test_case < T; test_case++){
        int n;
        bool check = true;
        vector<string> input;
        Trie t;
        
        cin >> n;
        
        for(int i = 0; i < n; i++){
            string str;
            cin >> str;
            input.push_back(str);
        }
        
        sort(input.begin(), input.end());
        
        for(int i = 0; i < n; i++){
            if(check && t.insert(input[i]) == false) check = false;
        }
        
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
