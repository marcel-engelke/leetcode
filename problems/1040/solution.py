def max_val(values: List[int]) -> int:
    max = values[-1]
    for i in range(len(values) - 2):
        if values[i] > max:
            max = values[i]
    return max
    
def min_val(values: List[int]) -> int:
    min = values[-1]
    for i in range(len(values) - 2):
        if values[i] < min:
            min = values[i]
    return min

def calc_avail_moves(stones: List[int], stone: int) -> List[int]:
	avail = []
    if stone == stones[0]:
        for i in range(1, len(stones) - 1)
            for j in range()
        
    else:
        pass


class Solution:
    def numMovesStonesII(self, stones: List[int]) -> List[int]:
        stones.sort()
