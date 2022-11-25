class Solution:
    values = []
    value_map = {}

    def getMaximumConsecutive(self, coins: [int]) -> int:
        for val in coins:
            if val in self.value_map:
                self.value_map[val] += 1
            else:
                self.values.append(val)
                self.value_map[val] = 1

        self.values.sort()

        n = 1
        while True:
            if n in self.value_map or self.possible(n):
                n += 1
                continue
            break
        return n

    def possible(self, target: int) -> bool:
        remaining = target
        for i in range(len(self.values) - 1, -1, -1):
            val = self.values[i]
            fit = int(remaining / val)
            if not fit:
                continue
            if fit > self.value_map[val]:
                fit = self.value_map[val]
        remaining -= fit * val
        if not remaining:
            return True
        return False


def test():
    coins = [1,1,1,4]
    print(Solution().getMaximumConsecutive(coins))

test()