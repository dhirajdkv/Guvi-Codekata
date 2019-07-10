name1,name2=input().split()
count=0
namelen1=len(name1)
namelen2=len(name2)
for i in range(0,namelen1):
    if(name1[i]==name2[i]):
        count+=1
    else:
        break
print(namelen2-count)
