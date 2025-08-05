#wap to find a word in a list and strip it and then remove it from the list
def search(str,l1):
    lf = []
    for i in(l1):
        if i.strip() == str:
            print(i, " has been removed")
        else:
            lf.append(i.strip())
    print("final list = ", lf)
str1 = input("enter the word u need to find:- ")
l1 = [' hello', 'hi ', 'by ', ' well  ']
search(str1, l1)

    