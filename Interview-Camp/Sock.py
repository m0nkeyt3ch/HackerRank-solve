input()
socks = input().strip().split()
pairs = 0
print(set(socks))
for element in set(socks):
    print(pairs)
    pairs += socks.count(element) // 2
    print("before: ", pairs)
print(pairs)
