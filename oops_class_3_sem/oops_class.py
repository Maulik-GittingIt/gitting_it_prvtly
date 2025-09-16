class Student:
    def __init__(self, name, age, roll):
        self.name = name
        self.roll = roll
        self.age = age
        self.school_cate = self.school()   # set category immediately

    def school(self):
        if 3 <= self.age < 6:
            return 'pre primary'
        elif 6 <= self.age < 12:
            return 'primary'
        elif 12 <= self.age < 15:
            return 'middle'
        else:
            return 'senior'


class Teacher(Student):
    def __init__(self, name, age, roll):
        super().__init__(name, age, roll)   # call Student’s __init__
        if self.school_cate == 'pre primary':
            self.c_t = 'teacher_1'
        elif self.school_cate == 'primary':
            self.c_t = 'teacher_2'
        elif self.school_cate == 'middle':
            self.c_t = 'teacher_3'
        elif self.school_cate == 'senior':
            self.c_t = 'teacher_4'
        else:
            self.c_t = 'supervisor_teacher'


class ClassRoom(Teacher):
    def __init__(self, name, age, roll):
        super().__init__(name, age, roll)   # call Teacher’s __init__ before i didn't call it hence the prev class didnt initalize, hence i was not able to access class_room_no
        if self.c_t == 'teacher_1':
            self.class_room_no = 1
        elif self.c_t == 'teacher_2':
            self.class_room_no = 2
        elif self.c_t == 'teacher_3':
            self.class_room_no = 3
        elif self.c_t == 'teacher_4':
            self.class_room_no = 4
        elif self.c_t == 'supervisor_teacher':
            self.class_room_no = 5
        else:
            self.class_room_no = None


# Create objects
maulik = ClassRoom('maulik', 19, 1)
rahul = ClassRoom('rahul', 6, 2)

# Access classroom numbers
print(maulik.name, "is in class number:-", maulik.class_room_no) 
print(rahul.name, "is in class number:-", rahul.class_room_no)   
i = 0
list_stu = []
while(True):
    n = input("do u wanna add a new vrble:- ")
    if(n.lower().strip()== "no"):
        break
    else:
        name = input("enter the name of the student:- ")
        age = int(input("enter the age of the student:- "))
        roll = int(input("enter the roll number of the student:- "))
        obj = ClassRoom(name, age, roll)
        list_stu.append(obj)
for i in list_stu:
    print(i.name, "is in class room number", i.class_room_no)
    # i can make a stack and add values in it

stu_name = []
stu_age = []
stu_roll = []
school_cate_list = []
teacher_list = []
room_no_list = []

for i in list_stu:
    stu_name.append(i.name)
    stu_age.append(i.age)
    stu_roll.append(i.roll)
    school_cate_list.append(i.school_cate)
    teacher_list.append(i.c_t)
    room_no_list.append(i.class_room_no)
print("\nname:- \t", end = "\t")
for i in stu_name:
    print(str(i).ljust(10), end = "\t")
print("\nage- \t", end = "\t")
for i in stu_age:
    print(str(i).ljust(10), end = "\t")
print("\nroll:- \t", end = "\t")
for i in stu_roll:
    print(str(i).ljust(10), end = "\t")
print("\nschool:-", end = "\t")
for i in school_cate_list:
    print(str(i).ljust(10), end = "\t")
print("\nteacher:-", end = "\t")
for i in teacher_list:
    print(str(i).ljust(10), end = "\t")
print("\nroom no:-", end = "\t")
for i in room_no_list:
    print(str(i).ljust(10), end = "\t")




        

