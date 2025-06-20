a = [int(i) for i in input().split()]
ways = 0
for i in range(1, len(a)):
    h = a[:i]
    c = a[i:]
    if sum(h) % len(h) == 0 and sum(c) % len(c) == 0 and sum(c) / len(c) != sum(a) / len(a):
        ways += 1
if sum(a) % len(a) == 0:
    ways += 1
print(ways)