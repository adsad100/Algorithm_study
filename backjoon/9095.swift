// backjoon 9095
// using Swift
// Probelm is for Dynamic Programming used bottom up

import Foundation

var arr = [Int](repeating: 0, count: 10)
arr[0] = 1
arr[1] = 2
arr[2] = 4

for i in 3...9{
    arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3]
}
var t = Int(readLine()!)!

for _ in 0..<t{
    print(arr[Int(readLine()!)! - 1])
}


