import Car

while True:
    brk = input("enter exit to quit or new for adding an entry:- ")
    if brk.lower() == "exit":
        break
    elif brk.lower() == "new":
        user_brand = input("enter the name of the brand:- ")
        user_model = input("enter the name of the model:-")
        obj1 = Car.Car(user_brand,user_model)
        Car.objs.append(obj1)

for i in Car.objs:
    print(i)
