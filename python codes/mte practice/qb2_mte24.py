def summarize_argument(*args, **kwargs):
    print(len(args), "= to the number of positional arguments\nall the positional arguments = ", *args)
    print("\nnumber of keyword arguments:- ", len(kwargs))
    print(kwargs.keys())
    print(kwargs.values())

summarize_argument('pizza', 'pasta', 'noodles', 'burger', 'vegetable salad', delivery = True, tip = 100, add = '1234 new delhi', time = '10.30')