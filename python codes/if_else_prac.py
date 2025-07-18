n1 = int(input("enter the 1st number:- "))
n2 = int(input("2nter the 2nd number:- "))
n3 = int(input("enter the 3rd number:- "))
n4 = int(input("enter the 4th number:- "))
if n1>=n2 and n1>=n3 and n1>=n4:
    print("the gratest number is:- ", n1)

elif n2>=n1 and n2>=n3 and n2>=n4:
    print("the gratest number is:- ", n2)
elif n3>=n2 and n3>=n1 and n3>=n4:
    print("the gratest number is:- ", n3)
elif n4>=n2 and n4>=n3 and n4>=n1:
    print("the gratest number is:- ", n4)
else:
    print("error")