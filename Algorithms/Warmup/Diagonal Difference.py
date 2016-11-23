import sys

n = int(raw_input().strip())
a = []
for i in range(0, n):
    a.append([])
    a_row = raw_input().split(' ')
    for j in range(0, n):
        a[i].append(int(a_row[j]))
sum1 = 0
sum2 = 0
for i in range(0, n):
    sum1 += a[i][i]
    sum2 += a[i][n - i - 1]
if ((sum1 - sum2) < 0):
    print(sum2 - sum1)
else:
    print(sum1 - sum2)