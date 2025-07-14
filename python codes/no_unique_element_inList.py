# no of unique elements in a list
list1=[]
num = int(input("enter the number of elements:- "))
for j in range(num):
    inp = int(input("enter the element:- "))
    list1.append(inp)
    
#list1 = [1,2,3,45,44,3,0,2]
list1.sort()
count = 1
n = len(list1)

for i in range(1, n):
    if list1[i] != list1[i-1]:
        count += 1

print("no of unique elements:", count)

        

    

    