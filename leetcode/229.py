class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        return [k for k, v in collections.Counter(nums).items() if v > (len(nums) // 3)]