class Car:
    def __init__(self, brand, name):
        self.brand = brand
        self.name = name

user_brand = input("enter the name of the brand:- ")
user_name = input("enter the name of the car:- ")
car1 = Car(user_brand, user_name)
print(car1.name,"\n",car1.brand)
        