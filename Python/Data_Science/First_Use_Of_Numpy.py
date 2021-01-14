# (Step 1) -> Import the Numpy Library
import numpy as np


# (Step 2) -> Create a Array of type NdArray 
Grades = np.array([99, 75, 12, 34, 89])

# (Step 3) -> Create a Variable which controls the Curve Center 'Here It is 80'
Curve_Center = 80

# (Step 4) -> Create a Function which will create a Curve
def Curve(Grades):
    Average = Grades.mean()
    Change = Curve_Center - Average
    New_Grades = Grades + Change
    return np.clip(New_Grades, Grades, 100)

# (Step 5) -> Call the Function
de = Curve(Grades)
print(de)