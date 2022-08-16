def twoSum(numbers: list[int], target: int) -> list[int]: 
    l = 0
    r = len(numbers) - 1
    while l <= r:
        sum = numbers[l] + numbers[r]
        if sum > target:
            r -= 1
            l = l
        elif sum < target:
            l += 1
            r = r
        else:
            return [l + 1, r + 1]
    return []
        
