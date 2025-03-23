def recursion(s, l, r, count):
    count[0] += 1
    if l >= r:
        return 1
    elif s[l] != s[r]:
        return 0
    else:
        return recursion(s, l + 1, r - 1, count)

def isPalindrome(s, count):
    result = recursion(s, 0, len(s) - 1, count)
    return result, count[0]



T = int(input())
for _ in range(T):
    count = [0]
    s = input()
    res, cnt = isPalindrome(s, count)
    print(res, cnt)