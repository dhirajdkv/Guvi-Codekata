name = input()
name = name.split(" ")
for item in name:
    item = item[0].upper()+item[1::]
    print(item,end=' ')
