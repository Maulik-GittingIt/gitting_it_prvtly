class university:
    name_uni = 'manipal uni jaipur'

    class department:
        def __init__(self, dept_name, faculty_count):
            self.dept_name = dept_name
            self.faculty_count = faculty_count
        def dis_play(self):
            print(f"name of department = {self.dept_name}, and number of teachers = {self.faculty_count}")


cse = university.department("soce", 20)
mecha = university.department('mechanical', 12)
mecha.dis_play()
cse.dis_play()



    