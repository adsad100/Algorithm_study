class Solution:
    def minimumOperations(self, nums: List[int], start: int, goal: int) -> int:
        q = deque()
        q.append((start, 0))
        visited = set()
        
        while q:
            num, cnt = q.popleft()
            for n in nums:
                for next_num in (num + n, num - n, num ^ n):
                    if next_num == goal:
                        return cnt + 1
                    if 0 <= next_num <= 1000 and next_num not in visited:
                        visited.add(next_num)
                        q.append((next_num, cnt + 1))
        return -1