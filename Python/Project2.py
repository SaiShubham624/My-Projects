import random
import datetime
Number = random.randint(1, 91)
Tries = 0
Ask = None

while(Ask != Number):
    Ask = int(input("Guess The Number: "))
    if(Ask == Number):
        print("You Guessed It Right")
    else:
        print("You Gussed it Wrong")
        if(Ask < Number):
            print("Greater Number")
        if(Ask > Number):
            print("Smaller Number")
    Tries = Tries + 1
print(f"Your Tries: {Tries}")

DateTime = datetime.datetime.now()

with open("Scores.txt", 'a') as S:
    S.write(f"{str(DateTime)} = {str(Tries)}\n")
   
