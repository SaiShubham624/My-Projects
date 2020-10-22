import random, time, math

class Person:

    def Take_Info(self):
        self .Name = input('Enter your Name: ')
        self .Age = int(input('Enter your Age: '))
        self .Profession = input('Enter your Profession: ')
    def __init__(self):
        print("Person Created")
        Person.Take_Info(self)
    def Print_Info(self):
        print("---------------------------------")
        print(f"Sir, Your Name is {self .Name}")
        print(f"Your Age is {self .Age}")
        print(f"Your Profession is {self .Profession}")
# Sai = Person()  # For Testing the Person Class
# Sai.Print_Info()

class Programmer:
    Company = "Microsoft"
    def Print(self):
        print(f"The Name of the Employee is {self .Name}")
        print(f"The Company of the Employee is {self .Company}")
        print(f"The Language of the Employee is {self .Language}")
    def Store(self, name, Language):
        self .Name = name
        self .Language = Language
        Programmer.Print(self)
# Sai = Programmer() # For Testing the Programmer Class
# Sai.Store("Sai Shubham Ray", "Python")

class Calculator:
    def __init__(self):
        print("Hello User This is a Calculator")
        a = int(input('Enter the Number: '))
        self .a = a

    # def Ask(self):
    #     a = int(input('Enter the Number: '))
    #     self.a = a
    # @staticmethod
    # def Greet():
        # print("Hello User This is a Calculator")
    def Calculate(self):
        self.sqr = math.sqrt(self .a)
        self.cu =  self .a * self .a * self .a
        self.sq =  self .a * self .a
    def Print(self):
        print("What do you want to find of this number")
        Ask = int(input('Cube It(2) or Square Root(3) or Square(4): '))
        if (Ask == 2):
            print(self.cu)
        elif (Ask == 3):
            print(self.sqr)
        
        elif (Ask == 4):
            print(self.sq)
        print("Thanks For Using It")   
# Sai = Calculator() # For Testing the Calculator Class
# Sai.Calculate()
# Sai.Print()

class Train:
    def check_seats(self):
        self.Seat_Generator = random.randint(1, 90)
        time.sleep(2)
        print(f"The Number of Seats available are {self .Seat_Generator} except {self .Ask}")
        time.sleep(3)
    def Fair_Information(self):
        Train_List = ["Rajdhani", "Mumbai Express", "Normal"]
        self .Train_Running = random.choice(Train_List)
        self .Train_Rest = random.choice(Train_List)
        print(f"Running Train is {self .Train_Running}")
        time.sleep(3)
        print(f"Resting Train is {self .Train_Rest}")
    def __init__(self):
        Running = True
        print("Hello, Person which seat Do you want to take")
        while(Running == True):
            self .Ask = int(input('Enter the Seat Number: '))
            if (self .Ask > 90):
                print("Seat Not Available. Please Enter number a Below 90 ")
            else:
                print(f"You Have Booked Your Seat at {self .Ask}")
                Running = False
        
        Train.check_seats(self)
        Train.Fair_Information(self)
# Sai = Train() # For Testing The Train Class




