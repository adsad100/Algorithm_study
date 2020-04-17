// backjoon 1463
// using dp bottom up 
// 더 컴팩트하게 짜고싶은데...

import Foundation

var num = Int(readLine()!)!

var arr : [Int] = [0,0,1,1]

if(num > 3){
    for i in 4...num{
        var c1 = i % 3 == 0 ? i/3 : 1000000;
        var c2 = i % 2 == 0 ? i/2 : 1000000;
        var index = i - 1;
        
        if(c1 != 1000000 && c2 != 1000000){
            index = arr[c1] > arr[c2] ? c2 : c1;
        } else if(c1 == 1000000 && c2 != 1000000) {
            index = c2;
        }
        else if(c1 != 1000000 && c2 == 1000000) {
            index = c1;
        }
        
        if(arr[i - 1] < arr[index]) {
            index = i - 1;
        }
        
        arr.append(arr[index] + 1)
    }
}
print(arr[num])
