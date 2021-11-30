class Solution:
    def findMiddleIndex(self, nums: List[int]) -> int:
        left = 0
        mid = 0
        right = sum(nums)
        
        for i in range(len(nums)):
            left += mid
            mid = nums[i]
            right -= mid
            
            if left == right:
                return i
        
        return -1