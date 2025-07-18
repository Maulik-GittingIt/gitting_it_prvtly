marks1 = float(input("enter the marks of subject 1:- "))
marks2 = float(input("enter the marks of subject 2:- "))
marks3 = float(input("enter the marks of subject 3:- "))
avg = (marks1+marks2+marks3)/3
if avg >= 40 and marks1>=33 and marks2>=33 and marks3>=33:
    print("result = passed")
else:
    print("result = failed")

