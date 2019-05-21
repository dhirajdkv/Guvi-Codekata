a = int(input())
b = int(input())
for j in range(a,b+1):
    alen = len(str(j))
    j=str(j)
    summ=0
    for i in range(0,alen):
        summ = summ + (int(j[i])**alen)
    if int(j) == summ:
        print(j)
    else:
        continue
