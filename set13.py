a = int(input())
flag=0
for j in range(2,a):
    if a%j==0:
        flag=2
        break
    else:
        flag=1
        continue
if(flag==1 or a==2):
    print("yes")
elif(flag==2):
    print("no")
                
