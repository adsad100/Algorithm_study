# Probelm 62 in leetcode
# 그래프 형식에서 최단 경로의 갯수 찾기
# 기본적인 방법은 dp를 사용하는 방식인데 수학적인 방식으로 계산
# 크기가 가로 m, 세로 n으로 구성되어 있다면 총 오른쪽으로 m - 1 왼쪽으로 n - 1 가야한다. 
# 위 사항을 Combination을 구하는 방식으로 생각했을 때 팩토리얼로 계산
# 팩토리얼의 max로 인해 c++이 아닌 python을 선택  

import math

class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        total = math.factorial((m + n - 2))
        total = total / math.factorial(m - 1)
        total = total / math.factorial(n - 1)
        return int(total)