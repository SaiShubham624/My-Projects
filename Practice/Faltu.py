import time
class Person:
    def __init__(self, CName, CAge, CHobby):
        self.TakeInformation(CName, CAge, CHobby)
        self.PrintInformation()

    def TakeInformation(self, Name, Age, Hobby):
        self.Age = Age
        self.Name = Name
        self.Hobby = Hobby
    def PrintInformation(self):
        print("Ok Your Name is ", self.Name)
        time.sleep(2)
        print("Your Age is ", self.Age)
        time.sleep(2)
        print("And your Hobby is", self.Hobby)
print("Hello This is Sai Shubham Ray")
a = input('Enter your Name:')
print("Okay your Name is ", a)
time.sleep(3)
print("So Tell me This Answer")
b = input("2x3+1:")
b = int(b)
if(b == 7):
    print("Yes you are Correct")
else:
    print("No You are not Correct")

Sai = Person("Sai Shubham Ray", 13, "Coding")










