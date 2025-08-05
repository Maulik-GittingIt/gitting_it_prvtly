import random
print('''
| Choice 1 | beats | Choice 2 | Why?                   |
| -------- | ----- | -------- | ---------------------- |
| Snake 🐍 | beats | Water 💧 | Snake drinks the water |
| Water 💧 | beats | Gun 🔫   | Water douses the gun   |
| Gun 🔫   | beats | Snake 🐍 | Gun kills the snake    |

''')
n = int(input("enter the number of rounds:- "))
user_pt = 0
comp_pt = 0
for i in range(n):

    computer = random.randint(-1, 1)
    you = input("enter s:snake, w:water and g:gun as ur choice:- ")
    you_dict = {'s': -1, 'w':0, 'g':1}
    comp_dict = { -1:'snake', 0:'water', 1:'gun'}
    you_choice = you_dict[you]
    print("computer choose",comp_dict[computer] )
    if(you_choice == -1 and computer == 0):
        user_pt +=1
        print("you win")
    elif(you_choice == 0 and computer == 1):
        user_pt+=1
        print("you win")
    elif(you_choice == 1 and computer == -1):
        user_pt+=1
        print("you win")
    elif(you_choice == 0 and computer == -1):
        comp_pt+=1
        print("computer wins")
    elif(you_choice == 1 and computer == 0):
        comp_pt+=1
        print("computer wins")

    elif(you_choice == -1 and computer == 1):
        comp_pt+=1
        print("computer wins")
    else:
        print("draw")
    print("-------------------------------------------------------------")
print("computer:- ", comp_pt)
print("user:- ", user_pt)
if(comp_pt>user_pt):
    print("computer wins🥇")
elif(user_pt>comp_pt):
    print("you win🥇")
else:
    print("draw🥈")

inp = input("\npress enter to exit")
