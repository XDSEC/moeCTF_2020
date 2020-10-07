import random

# for i in range(2, 10):
#     cli = random.randInt(1, 1000)
'''
def lengthOfLongestSubstring(s):
    """
    :type s: str
    :rtype: int
    """
    start = maxLength = 0
    usedChar = {}
    for index, char in enumerate(s):
        if char in usedChar and start <= usedChar[char]:
            start = usedChar[char] + 1
        else:
            maxLength = max(maxLength, index - start + 1)
        usedChar[char] = index
    return maxLength
'''
'''
for j in range(4, 11):
    out = ''
    for i in range(random.randint(1, 10000000)):
        out += chr(random.randint(32, 126))
    with open(str(j)+'.in', 'w') as outf:
        outf.write(out)
    ans = lengthOfLongestSubstring(out)
    with open(str(j)+'.out', 'w') as outf:
        outf.write(str(ans))
'''
def lengthOfLongestSubstring(s: str) -> int:
    if not s:return 0
    left = 0
    lookup = set()
    n = len(s)
    max_len = 0
    cur_len = 0
    for i in range(n):
        cur_len += 1
        while s[i] in lookup:
            lookup.remove(s[left])
            left += 1
            cur_len -= 1
        if cur_len > max_len:max_len = cur_len
        lookup.add(s[i])
    return max_len

inp = input()
print(len(inp))
print(lengthOfLongestSubstring(inp))