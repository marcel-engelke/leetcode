def play_round(piles: [int], m: int) -> (int, [int], int):
    max_stones = 0
    max_n = 0
    for n in range(1, m * 2 + 1):
        stones = 0
        if n > len(piles): break

        for i in range(0, n):
            stones += piles[i]
        if len(piles[n:]):
            _, new_piles, new_m = play_round(piles[n:], max(n, m))
            new_stones, _, new_m = play_round(new_piles, max(n, new_m))
            stones += new_stones
        if stones > max_stones:
            max_stones = stones
            max_n = n
    return max_stones, piles[max_n:], max(max_n, m)

class Solution:
    def stoneGameII(self, piles: [int]) -> int:
        max_stones, _, _ = play_round(piles, 1)
        return max_stones
    
def test():
    # piles = [2,7,9,4,4]
    # piles = [2,7,9]
    # piles =[1,2,3,4,5,100]
    piles = [8270,7145,575,5156,5126,2905,8793,7817,5532,5726,7071,7730,5200,5369,5763,7148,8287,9449,7567,4850,1385,2135,1737,9511,8065,7063,8023,7729,7084,8407]
    print(Solution().stoneGameII(piles))
    
test()