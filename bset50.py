n=int(input())
flag=False
for i in range(0,100):
  if 2**i == n:
    print('yes')
    flag=False
    break;
  else:
    flag=True
if(flag==True):
  print('no')
