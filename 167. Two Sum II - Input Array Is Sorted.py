class Solution :
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        numberSize = len(numbers)
        pointer1 = 0
        pointer2 = numberSize - 1
        while numbers[pointer1] + numbers[pointer2] != target:
            if numbers[pointer1] + numbers[pointer2] > target:
                pointer2 -= 1
            else:
                pointer1 += 1
        return [pointer1 + 1, pointer2 + 1]
