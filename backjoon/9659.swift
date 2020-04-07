// backjoon 9659
// using Swift
// Not that hard algorithm for solving problem like this 

import Foundation

var stone = Int(readLine()!)!
var sk = true
while stone >= 4{
    stone -= 3
    sk = !sk
}

if stone == 1{
    if sk{
        print("SK")
    } else {
        print("CY")
    }
} else if stone == 2{
    if sk{
        print("CY")
    } else {
        print("SK")
    }
} else if stone == 3{
    if sk{
        print("SK")
    } else {
        print("CY")
    }
}

