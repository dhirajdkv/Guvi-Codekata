name1,name2=input().split()
count=0
namelen1=len(name1)
namelen2=len(name2)
if(namelen1<=namelen2):
    mainlen=namelen1
    maxlen=namelen2
else:
    mainlen=namelen2
    maxlen=namelen1
for i in range(0,mainlen):
    if(name1[i]==name2[i]):
        count+=1
    else:
        break
print(maxlen-count)
