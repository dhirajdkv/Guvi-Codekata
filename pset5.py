dic = {"I":1,"V":5,"X":10}
b = input()
if b == "IV":
    print(4)
elif b == "IX":
    print(9)
else:
    b = list(b)
    su=0
    for item in b:
        su = su + dic[item]
    print(su)
