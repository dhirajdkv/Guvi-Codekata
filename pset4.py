a = input()
le = len(a)
a = a.replace(" ",". ")
if a[le]!=".":
    print(a+".")
else:
    print(a)
