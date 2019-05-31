try:
    a = int(input())
    a = str(a)
    print(a[::-1])
except ValueError:
    print("Invalid input")
