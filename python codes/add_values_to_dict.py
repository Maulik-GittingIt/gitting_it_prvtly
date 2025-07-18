#add values to an empty dictionary 

dict_mt = {}
n = int(input("enter the number od key-value pair u want to input"))
for i in range(n):
    word_key = input("enter the key:- ")
    word_value = input("enter the value:-")
    dict_mt[word_key] = word_value

print(dict_mt)

