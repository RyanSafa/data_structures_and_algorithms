def partitionLabels(s: str) -> list[int]:
    my_dict= {}

    for i in range(len(s)):
        my_dict[s[i]] = i
    output = []
    size, end = 0, 0

    for i in range(len(s)):
        size += 1
        end = max(end, my_dict[s[i]])

        if i == end:
            output.append(size)
            size = 0
    return output
