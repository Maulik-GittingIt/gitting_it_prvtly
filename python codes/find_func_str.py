#we can simply use strname.find("") to do this task but i will use for for it 
str1 = input("enter the string:- ")
str2 = input("enter the letter u need to locate:- ")
len_str = len(str1)
for i in range(len_str):
    if(str1[i] == str2):
        print("occurance of the substring found at:- ", i)


