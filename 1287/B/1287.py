n, k = input().split()
n = int(n)
k = int(k)

arr = []
for _ in range(n):
    arr.append([x for x in input()])

dic = {"S": 0, "E": 1, "T": 2}
for i in range(n):
    for j in range(k):
        arr[i][j] = dic[arr[i][j]]

count = 0

for i1 in range(n):
    for i2 in range(i1 + 1, n):
        search = [(3 - arr[i1][j] - arr[i2][j]) % 3 for j in range(k)]
        if search in arr[i2 + 1:]:
            count += 1
print(count)
