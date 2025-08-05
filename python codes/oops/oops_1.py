class Employee:
   name = "maulik bahl" 
   language  = "python"
   salary = 99999
any_variable = Employee
print(any_variable.name, any_variable.language, any_variable.salary)

# this is a class, here there is a variable stored and has a fixzed value so when ever i try to print it i will get the same results
# hence to create a template for objects we will create a function inside the class so that it can allow us to input multiple values and create distinct objects 
# for that we use def __init__ and use 'self' to indicate the variables inside the function and it acts as the bridge when we try to print the values stored inside a particular object  