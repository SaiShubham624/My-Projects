print("Now Learning Inheritance in Python")

class Employee:
    company = "Google"
    def TakeDetails(self):
        self.a = input("Enter your Name: ")
        self.b = int(input("Enter your Age: "))
        self.c = input("Enter your Profession: ")
    def ShowDetails(self):
        print("----------------------------")
        print(f"Your Name is {self.a}")
        print(f"Your Age is {self.b}")
        print(f"Your Profession is {self.c}")
    def __init__(self):
        Employee.TakeDetails(self)
        Employee.ShowDetails(self)
class Programmer(Employee): # Inheritance Example Programmer is Inherited from Employee
    def TakeLanguage(self):
        self.Language = input('Enter your Language: ')
    def PrintLanguage(self):
        print(f"Your Language is {self.Language}")

    def __init__(self):
        Programmer.TakeDetails(self)
        Programmer.TakeLanguage(self)
        Programmer.ShowDetails(self)
        Programmer.PrintLanguage(self)  

# Lets Do it Tommorow
# One = Programmer()

