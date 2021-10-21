class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeroPoint = 0
        for notZeroPoint in range(len(nums)):
            if nums[notZeroPoint] != 0:
                nums[zeroPoint], nums[notZeroPoint] = nums[notZeroPoint], nums[zeroPoint]
                zeroPoint += 1