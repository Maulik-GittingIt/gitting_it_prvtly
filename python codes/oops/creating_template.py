class Car:
    def __init__(self, brand, name):
        self.brand = brand
        self.name = name
    def full_name(self):
        return f"brand: {self.brand} name: {self.name}"

#user_brand = input("enter the name of the brand:- ")
#user_name = input("enter the name of the car:- ")
#car1 = Car(user_brand, user_name)
#print(car1.name,"\n",car1.brand)
#print(car1.full_name())

# INHERITANCE:- this means that an obj recieves the same values in the parent class:-
class Electric_car(Car):
    def __init__(self, brand, name, battery_size):
        super().__init__(brand, name) #takes the values already stored in the above class, done by super function
        self.battery_size = battery_size

car2 = Electric_car("tesla", "model s", "87kwh")
print(car2.name)
print(car2.full_name())


