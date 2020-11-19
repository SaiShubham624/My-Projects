print("This is a Average Calculator")
SubjectMarks = int(input('Enter your One Subject Marks: '))
Subjects = int(input('Enter your Subjects Number: '))
CountSubjects = 0
Marks = []
while(CountSubjects < Subjects):
    Subject = int(input(f"Enter the Marks of {CountSubjects+1} Subject: "))
    Marks.append(Subject)
    CountSubjects += 1
Sum = 0
CountSum = 0 
for i in Marks:
    Sum += Marks[CountSum]
    print(Sum)

# Average = float((Sum/(Subjects*SubjectMarks))*100)
# print(f"Your Average is {Average}")

'''
80*4 = 320
72 + 72 + 80 + 78 = 302
{(302/320)*100}


'''
