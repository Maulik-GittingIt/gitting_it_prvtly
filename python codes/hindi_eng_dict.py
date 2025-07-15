words = {"dhanyavad":"thank you", "meetha":"arjun", "cheeni":"sugar","bhai":"brother", "beta":"son", "mera":"mine", "mela":"amusment park", "pita":"father", "ma":"mother"}

n = int(input("enter the number of words u want to traslate:- "))
for i in range(n):
    inp = input("enter the word:- ")
    print(words[inp])
print("---------------------------------------")