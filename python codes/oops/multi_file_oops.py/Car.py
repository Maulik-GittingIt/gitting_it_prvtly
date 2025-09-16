class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model
    def __str__(self):
        return f"Car(Brand: {self.brand}, model:{self.model})"
    

objs = []

