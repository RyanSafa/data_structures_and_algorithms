def sortedSquares(nums: list[int]) -> list[int]:
    l = 0
    r = len(nums) - 1
    output_arr =[x for x in range(0, len(nums))]
    curr_index = len(nums) - 1

    while 0 <= curr_index:
        left_square = nums[l] ** 2
        right_square = nums[r]** 2
        if left_square > right_square:
            output_arr[curr_index] = left_square
            l += 1
        else:
            output_arr[curr_index] = right_square
            r -= 1
        curr_index -= 1
    return output_arr
