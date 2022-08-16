def threeSum(nums: list[int]) -> list[list[int]]:
    sorted_nums = sorted(nums)
    output = [] 
    for i in range(0, len(sorted_nums)):
        if i > 0 and sorted_nums[i] == sorted_nums[i-1]:
            continue
        l = i + 1
        r = len(nums) - 1
        while l < r:
            sum = sorted_nums[i] + sorted_nums[l] + sorted_nums[r]
            if sum == 0:
                output.append([sorted_nums[i],sorted_nums[l],sorted_nums[r]])
                l += 1
                r -= 1 
                while l < r and sorted_nums[l] == sorted_nums[l-1]:
                    l += 1
                while l < r and sorted_nums[r+1] == sorted_nums[r]:
                    r -= 1
            elif sum > 0:
                r -= 1
            else: 
                l += 1
    return output
