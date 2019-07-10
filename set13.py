a = int(input())
flag=0
for i in range(2,a):
    if a%i==0:
        flag=2
        break
    else:
        flag=1
        continue
if(flag==1 or a==2):
    print("yes")
elif(flag==2):
    print("no")
                
