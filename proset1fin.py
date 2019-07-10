name=[]
flag=True
count=0
arr=int(input())
for i in range(0,arr):
    data = input()
    name.append(data)
name = sorted(name, key=len)
length = len(name[0])
original = name[0]
del name[0]
for i in range(0,length):
    for j in range(0,len(name)):
        if(original[i]==name[j][i]):
            count+=1
        else:
            flag=False
    if(flag==False):
        break
    if(count==len(name)):
        print(original[i],end='')
        count=0

            
        

