def order_pizza(size, *toppings, **details):
    print("ordered a {size} pizza\n")
    for i in toppings:
        print(i, ",", end = '\t')
    print('\n',details)
order_pizza('medium', 'peperonni', 'cheese', 'olive', 'corn', delievery = True, tip=5, time = 30)