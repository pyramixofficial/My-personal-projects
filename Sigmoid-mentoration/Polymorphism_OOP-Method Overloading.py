class Student:
	def __init__(self, name, surname, grades, comments):
		self.name = name
		self.surname = surname
		self.grades = grades
		self.comment = comments

	def average_grade(self):
		avg = 0
		for value in self.grades.values():
			avg += sum(value)/len(value)
		return avg/len(self.grades.keys())

	def sleeping(self):
		print("Student is sleeping")

class Teacher:
	def __init__(self, name, surname):
		self.name = name
		self.surname = surname

	def sleeping(self):
		print("Teacher is sleeping")

grades = {'Informatics':[7, 9, 8], 'Math':[7, 9, 8]}
student1 = Student('Alex', 'Pierce', grades, 'Good Student')
teacher1 = Teacher('Tom', 'Cruise')

for obj in (student1, teacher1):
	obj.sleeping()