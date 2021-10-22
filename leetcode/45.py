class Solution:
    def jump(self, nums: List[int]) -> int:
        
        if len(nums) <= 1: return 0
        
        now, prob = 0, nums[0]
        times = 1
        while prob < len(nums) - 1:
            times += 1
            nxt = max(i + nums[i] for i in range(now, prob + 1))
            now, prob = prob, nxt
        return times