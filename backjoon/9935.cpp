// backjoon 9935
// 문자열 폭발 문제로 해당 문자열에 폭탄 문자가 존재하면 그 문자를 삭제하고 다시 탐색하여 해당 문자가 있는지 확인하는 과정
// 만약 erase나 substr를 사용할 경우 시간 복잡도가 굉장히 증가하여 시간초과가 날 가능성이 매우 크다.
// 해당 폭탄 문자열의 맨 뒷 글자와 동일안 글자를 발견했을 경우 input string에서 reverse하게 검색한 다음 폭탄 문자열이면
// 인덱스를 수정하여 덮어쓰는 방식으로 사용.

#include <iostream>
#include <string>

using namespace std;

int main(){
    string target, boom, ret;
    ret.resize(1000000);
    cin >> target >> boom;

    int retIndex = 0;
    for(int i = 0; i < target.size(); i++){
        ret[retIndex++] = target[i];
        int boomIndex = boom.size();
        if(target[i] == boom[--boomIndex]){
            bool check = false;
            int tmp = retIndex - boom.length();
            for(int j = retIndex-1; j>=tmp; j--){
                if(ret[j] == boom[boomIndex--]){
                    check = true;
                }
                else{
                    check = false;
                    break;
                }
            }
            if(check) retIndex -= boom.length();

        }
    }
    if(retIndex == 0) cout << "FRULA" << endl;
    else {
        for(int i = 0; i < retIndex; i++) cout << ret[i];
        cout << endl;
    }
}
