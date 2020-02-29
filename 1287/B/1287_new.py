from collections import defaultdict
from functools import reduce
n, k = input().split()
n = int(n)
k = int(k)

arr = []
df = defaultdict(set)

for i in range(n):
    line = input()
    arr.append(line)
    df[line] += [i]

dic1 = {'S': 0, 'E': 1, 'T': 2}
dic2 = {0: "S", 1: "E", 2: "T"}

count = 0
for i in range(n - 2):
    for j in range(i + 1, n - 1):
        tmp = [dic2[(3 - dic1[x] - dic1[y]) % 3] for x, y in zip(arr[i], arr[j])]
        word = reduce(lambda x, y: x + y, tmp)
        if word in df:
            count += (df[word][-1] > j)
print(count)
