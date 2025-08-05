f = open("python codes/file_handling/file_1.txt", "a+")
str1 = input("enter the text u want to add:- ")
f.write(str1 + "\n")
f.flush()
f.seek(0)
print(f.read())

