class Solution:
    def minDeletions(self, s: str) -> int:
        nums, ans, cache = list(collections.Counter(s).values()), 0, set()
        
        for num in nums:
            while num > 0 and num in cache:
                num -= 1
                ans += 1
            
            if num not in cache: 
                cache.add(num)
        
        return ans