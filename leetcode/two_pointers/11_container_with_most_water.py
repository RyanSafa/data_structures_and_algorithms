def maxArea(height: list[int]) -> int:
    l = 0
    r = len(height) - 1
    max_area = 0 
    while l <= r:
        container_height = min(height[l], height[r])
        width = r - l
        new_area = container_height * width
        max_area = max(max_area, new_area)
        if height[r] < height[l]:
            r -= 1
        else:
            l += 1
    return max_area
