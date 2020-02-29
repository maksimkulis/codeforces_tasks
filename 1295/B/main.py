from collections import defaultdict

T = int(input())

for i in range(T):
    n, x = map(int, input().split())
    s = map(int, input().split())
    sum = 0
    cur = 0
    max_ = 0
    min_ = 0
    dd = defaultdict(int)
    for num in s:
        if num == 0:
            sum += 1
        else:
            sum -= 1
        dd[sum] += 1
        max_ = max(max_, sum)
        min_ = min(min_, sum)
    if sum == 0 and min_ <= x <= max_:
        print(-1)
        exit()
    elif sum == 0:
        print(0)
        exit()
    elif min_ > x and sum
