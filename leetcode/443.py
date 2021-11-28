class Solution:
    def compress(self, chars: List[str]) -> int:
        ans = []
        for k, v in groupby(chars):
            num = str(len(list(v)))
            ans += [k]
            if not num == '1':
                ans += list(num)
        chars[:] = ans[:]
        return len(ans)
