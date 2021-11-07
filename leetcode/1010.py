class Solution:
    def numPairsDivisibleBy60(self, time: List[int]) -> int:
        d = collections.Counter(list(map(lambda x: x % 60, time)))
        
        ans = 0
        for i, v in d.items():
            if not i == 0 and not i == 30:
                ans += v * d[60 - i]
        ans += (d[0] * (d[0] - 1))
        ans += (d[30] * (d[30] - 1))

        return ans // 2