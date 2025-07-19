def greatest(n1, n2, n3):
    if(n1>=n2 and n1>=n3):
        print("%d is greatest" %(n1))
    elif(n2>=n1 and n2>=n3):
        print("%d is greatest" %(n2))
    elif(n3>=n2 and n3>=n1):
        print("%d is greatest" %(n3))
    else:
        print("error")
    

num1 = int(input("enter the first number"))
num2 = int(input("enter the second number"))
num3 = int(input("enter the third number"))
greatest(num1,num2,num3)