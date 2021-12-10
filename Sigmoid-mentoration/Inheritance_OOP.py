class Human:
	def __init__(self, name, surname):
		self.name = name
		self.surname = surname
	def sleeping (self):
		print("I'm sleeping")

class Student(Human):
	def __init__(self, name, surname, grades, comments):
		super().__init__(name, surname)
		self.grades = grades
		self.comment = comments

	def average_grade(self):
		avg = 0
		for value in self.grades.values():
			avg += sum (value) / len(value)
		return avg / len(self.grades.keys())

human1 = Human('Alex', 'Pierce')
human1.sleeping()

grades = {'Informatics':[7, 9, 8], 'Math':[7, 9, 8]}
student1 = Student('Alex', 'Pierce', grades, 'Good Student')
student1.sleeping()
