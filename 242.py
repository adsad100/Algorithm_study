class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if not len(s) == len(t):
            return False
        
        s_counter, t_counter = collections.Counter(s), collections.Counter(t)
        
        for k, v in (s_counter).items():
            if k in t_counter and t_counter[k] == v:
                continue
            else:
                return False
        return True