class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        ans = set()
        for i in range(1, len(tiles) + 1):
            s = set(map(lambda x: ''.join(x), permutations(tiles, i)))
            ans |= s
        return len(ans)