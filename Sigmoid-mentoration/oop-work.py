class Student:
	def __init__(self, name, surname, grades, comments):
		self.name = name
		self.surname = surname
		self.grades = grades
		self.comments = comments

	def average_grade(self):
		avg = 0
		for value in self.grades.values():
			avg += sum (value) / len(value)
		return avg / len(self.grades.keys())

grades = {'Informatics':[7, 9, 8], 'Math':[7, 9, 8]}
student1 = Student('Alex', 'Pierce', grades, 'Good Student')
print(student1.average_grade())
