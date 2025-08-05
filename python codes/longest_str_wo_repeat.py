# longest string without repeating characters:- 

str1 = input("enter the string:- ")
str2 = ''
n = len(str1)
already = []
for i in range(n):
    if(str1[i] not in already):
        str2 += str1[i]
        already.append(str1[i])
    else:
        break

print(str2)