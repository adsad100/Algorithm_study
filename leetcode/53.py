class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        maxVal = -1001
        for i in range(len(nums)):
            for j in range(i + 1, len(nums) + 1):
                s = sum(nums[i:j])
                maxVal = max(s, maxVal)
        return maxVal