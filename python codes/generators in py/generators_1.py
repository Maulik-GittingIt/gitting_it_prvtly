def generator_1():
    for i in range (5):
        yield i     # yield function suspends the exectuion of the given function and returns a generator

gen = generator_1()
#print(next(gen))
#print(next(gen))
#print(next(gen))
#print(next(gen))

#or we can use a for loop
for i in gen:
    print(i)