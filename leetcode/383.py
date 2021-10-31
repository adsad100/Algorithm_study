class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        c_ran, c_mag = collections.Counter(ransomNote), collections.Counter(magazine)
        
        for k, v in c_ran.items():
            if c_mag[k] >= v and k in c_mag.elements():
                continue
            else:
                return False
        return True