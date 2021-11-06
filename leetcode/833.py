class Solution(object):
    def findReplaceString(self, s, indices, sources, targets):
        """
        :type s: str
        :type indices: List[int]
        :type sources: List[str]
        :type targets: List[str]
        :rtype: str
        """
        arr = []
        for i in range(len(indices)):
            arr.append([indices[i], sources[i], targets[i]])
        arr.sort(key = lambda x: x[0])
        
        
        idx = 0
        cur = 0
        ans = ''
        while cur < len(s):
            if cur == arr[idx][0]:
                if s[arr[idx][0]: arr[idx][0] + len(arr[idx][1])] == arr[idx][1]:
                    ans += arr[idx][2]
                    cur += len(arr[idx][1])
                    idx = (idx + 1) % len(arr)
                else:
                    idx = (idx + 1) % len(arr)
                    ans += s[cur]
                    cur += 1
            else:
                ans += s[cur]
                cur += 1
            print(ans)
        return ans