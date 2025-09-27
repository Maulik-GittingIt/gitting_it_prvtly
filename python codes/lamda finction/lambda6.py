list1 = ['asasa', 'asdf', 'tysm', 'qwerty', 'tirtyewewewewewewewe']
list2 = list(filter(lambda x: len(x)>5, list1))
print(*list2)