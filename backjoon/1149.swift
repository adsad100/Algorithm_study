// backjoon 1149
// using DP bottomup for counting minimum value

import Foundation


var test_case = Int(readLine()!)!
var color = 0
var arr : [[Int]] = [[0,0,0]]

for i in 1...test_case{
    
    var input = readLine()!.components(separatedBy: " ").map{Int(String($0))!}
    arr.append(input)
    arr[i][0] += min(arr[i - 1][1], arr[i - 1][2])
    arr[i][1] += min(arr[i - 1][0], arr[i - 1][2])
    arr[i][2] += min(arr[i - 1][1], arr[i - 1][0])
}
print(min(arr[test_case][0], arr[test_case][1], arr[test_case][2]))
