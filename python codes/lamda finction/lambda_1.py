names = ['alice', 'bob', 'charlie', 'david', 'eve']
names.sort(key = lambda x:len(x), reverse=True)
print(names)

names2 = ['hello', 'i', 'am', 'not', 'four']
sort = sorted(names2, key = lambda x: len(x), reverse=True)
print(sort)