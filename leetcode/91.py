class Solution(object):
    def numDecodings(self, s):
        n = len(s)

        if len(s) == 0:
            return 0

        A = [0] * (n+1)
        A[0] = 1
        for i in range(n):
            if s[i] == '0':
                continue
            current = ""

            for j in range(i, min(i+2, n)):
                current += s[j]

                if 1 <= int(current) <= 26:
                    A[i+len(current)] += A[i]

        return A[n]
                
                