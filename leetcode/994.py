class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        norm_cnt = 0
        rott = []
        
        ans = 0
        
        for i, _ in enumerate(grid):
            for j, point in enumerate(grid[i]):
                if point == 2:
                    rott.append([i, j])
                    norm_cnt += 1
                elif point == 1:
                    norm_cnt += 1
        
        dir_i = [0, 0, 1, -1]
        dir_j = [1, -1, 0, 0]
        
        rott_cnt = len(rott)
        while True:
            
            if rott_cnt == norm_cnt:
                return ans
            
            temp = []
            prev_cnt = rott_cnt
            for i, j in rott:
                for ii, jj in zip(dir_i, dir_j):
                    di, dj = i + ii, j + jj
                    if 0<= di < len(grid) and 0 <= dj < len(grid[0]):
                        if grid[di][dj] == 1:
                            temp.append([di, dj])   
                            grid[di][dj] = 2
                            rott_cnt += 1
            
            ans += 1
            
            if prev_cnt == rott_cnt:
                return -1
            
            
            rott = temp