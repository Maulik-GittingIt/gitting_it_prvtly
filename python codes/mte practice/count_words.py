def count_word(str1):
    count = 0
    list1 = []
    for i in str1.split(" "):
        if i != '':

            count+=1
            list1.append(i)

    return  count,list1

def count_word_list_comp(str1):
    count = 0
    list1 = [i for i in str1.split(" ") if i != '']
    return len(list1), list1
str1 = input("enter the sentence:- \n")
print(count_word(str1))
print("\ndoing the same using list comprehension\n:- ")

print(count_word_list_comp(str1))