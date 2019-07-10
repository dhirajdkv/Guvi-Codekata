n = int(input())
k = int(input())
s = 0
b = []
for i in range(0,n):
    v =int(input())
    b.append(v)
for i in range(0,k):
    s = s + b[i]
print(s)
