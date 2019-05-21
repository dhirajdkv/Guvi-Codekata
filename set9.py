n = int(input())
k = int(input())
s = 0
a = []
for i in range(0,n):
    v =int(input())
    a.append(v)
for i in range(0,k):
    s = s + a[i]
print(s)
