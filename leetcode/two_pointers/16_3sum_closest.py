def threeSumClosest(nums: list[int], target: int) -> int:
    nums.sort()
    closest_so_far = float('inf')
    closest_sum = 0
    for i in range(0, len(nums)):
        l = i + 1
        r = len(nums) - 1
        while l < r:
            three_sum = nums[i] + nums[l] + nums[r]
            diff = abs(three_sum - target)
            if three_sum == target:
                return three_sum
            elif three_sum < target:
                l += 1
            else:
                r -= 1
            if closest_so_far > diff:
                closest_so_far = diff 
                closest_sum = three_sum
    return closest_sum 
