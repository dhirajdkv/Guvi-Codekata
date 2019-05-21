a = int(input())
alen = len(str(a))
a=str(a)
summ=0
for i in range(0,alen):
    summ = summ + (int(a[i])**alen)
if int(a) == summ:
    print("yes")
else:
    print("no")
