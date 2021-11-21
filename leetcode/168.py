class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        ans = []
        while columnNumber > 0:
            columnNumber, q = divmod(columnNumber - 1, 26)
            ans += [q]
        
        return ''.join(map(lambda x: chr(x + 65), ans[::-1]))