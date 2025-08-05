def sum_natural(n):
    if n == 0:
        return 0
    else:
        return(n+sum_natural(n-1))
num = int(input("enter the number:- "))
print(sum_natural(num))


