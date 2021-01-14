# (Step 1) -> Importing the Panda Library
import pandas as pd

# (Step 2) -> Create a Dictionary of Lists
Data = {'Name' : ["Sai", "Sanket", "Sarita", "Alok"], 'Age': [13, 7, 41, 51]}

# (Step 3) -> Use the Created Dictionary to Create a Table using Pandas
Table = pd.DataFrame(Data, index=[1, 2, 3, 4])

# (Step 4) -> Print the Table
print(Table)
