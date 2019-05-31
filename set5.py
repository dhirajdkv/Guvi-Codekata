dic = {"I":1,"V":5,"X":10}
a = input()
if a == "IV":
    print(4)
elif a == "IX":
    print(9)
else:
    a = list(a)
    su=0
    for item in a:
        su = su + dic[item]
    print(su)
