############# Sol 1

class Solution:
    def customSortString(self, order: str, s: str) -> str:
        d = defaultdict(lambda: 26)
        for k, v in enumerate(order):
            d[v] = k
            
        ans = ['' for _ in range(27)]
        for ss in s:
            ans[d[ss]] += ss
        
        return ''.join(ans)

############# Sol 2

class Solution:
    def customSortString(self, order: str, s: str) -> str:
        d = defaultdict(lambda: 27)
        for k, v in enumerate(order):
            d[v] = k
        return ''.join(sorted(s, key = lambda x: d[x]))