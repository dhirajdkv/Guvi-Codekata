n = int(input())
a=[]
for i in range(0,n):
    s = int(input())
    a.append(s)
for i in range(0,n):
    for j in range(i,n):
        if a[i]>a[j]:
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
l = int(n/2)
print(a[l])

        
