#input 8 numbers from user and print all the unique ones
num_set = set()
for i in range(8):
    num = int(input("enter integer values:- "))
    num_set.add(num)
print("set of unique numbers = ", num_set)
#using the property of set that it only contains values that are unique
