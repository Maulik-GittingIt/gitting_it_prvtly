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
    
        

