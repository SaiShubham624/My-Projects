class Animal:
    def __init__(self, animal):
        self.animal = animal
        print(f"Animal Created Named {self.animal} ")
    def Move(self):
        print("Animal is Moving")

class Pets(Animal):
    def Eat(self):
        self.Yes = ['Y','y']
        self.No = ['N','n']
        # super().__init__(self, animal)
        self.Ask = input('Do you want to feed your Animal(Y/N): ')
        if(self.Ask in self.Yes):
            print("Your Animal is Eating")
        if(self.Ask in self.No):
            print("Your Animal is Not Eating")


    
    

class Dog(Pets):
    @staticmethod
    def Bark():
        Yesi = ['Y','y']
        Nos = ['N','n']
        As = input('Do you want to Hit your Animal(Y/N): ')
        if(As in Yesi):
            print("Your Animal is Barking")
        if(As in Nos):
            print("You choosed not hit your Pet")


    
Tommy = Dog("Tommy")
Tommy.Move()
Tommy.Eat()
Tommy.Bark()