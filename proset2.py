name1,name2=input().split()
count=0
count = abs(len(name2)-len(name1))
if(len(name1)<=len(name2)):
    ori = len(name1)
else:
    ori = len(name2)
for i in range(ori):
    if(len(name2)==1 and name2[i] in name1):
        break
    if (name1[i]!=name2[i]):
        count=count+1
print(count)
