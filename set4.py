a = input()
alph = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
if len(a)<2:
    if a.lower() in alph:
        print("Alphabet")
    else:
        print("No")
else:
    print("Invalid")
    
