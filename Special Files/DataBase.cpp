#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

class EveryThing {
private:
    int Age;
    int Id;
    string Profession;
    string Name;
public:
    // Creating a Checking Function to Check 
    void Search(string Name) {

        // Opening the File
        ifstream in("DataBase.txt");

        // Function Variables
        string Name2 = "Hi";
        bool Checking = true;
        int CountLine=0;
        
        // Starting an While Loop to Check
        while (Name2 != Name) {

            in>>Name2;            
            
            // Condition that if the File Ends stop Searching            
            if(Name2 != Name){
                getline(in, Name2);
                in>>Name2;
                CountLine++;

            }
            
            // Condition that if File Ends and Name was Not Founded then Stop Searching
            else if (in.eof() && Name2 != Name) {
                Checking = false;
                break;
            }

            // Condition that if you find the word make it equal to the Class Name
            else if (Name2 == Name) {
                this->Name = Name;
                Checking = true;
                break;
            }
           
            
            
        }

        // Condition that if Checking is True then Print the Name founded
        if (Checking == true) {
            cout << "The Name is at Line No. " << CountLine+1 << endl;
        }
        // Condition that if Checking is False then Say Can't Find
        else if(Checking == false)
        {
            cout << "Can't Find the Name\nConsider Adding It" << endl;
        }

        in.close();
    }

    // Creating a Go Function to Go to that line
    void Go(int Line) {

        // Opening the File
        ifstream in("DataBase.txt");

        // Function Variables
        int LineOrigin = 0;
        string StoreLine;

        // Sends us to Entered Line
        while (LineOrigin != Line) {
            getline(in, StoreLine);
            LineOrigin++;
        }

        cout << "The Line Contain the Following things: " << endl;
        cout << "Name                    Age                    Id                    Profession " << endl;
        cout << StoreLine << endl;

        // Closing the File
        in.close();
    }

    // Creating a Add Function to Add new Members to the DataBase
    void Add(string Name, int Age, string Profession, int Id) {
        // Opening the File
        ofstream out("DataBase.txt", std::ios_base::app);

        // Function Variables
        this->Age = Age;
        this->Name = Name;
        this->Profession = Profession;
        this->Id = Id;

        // Writing to that File
        out << endl << this->Name << "                      " << this->Age << "                       " << this->Id << "                       " << this->Profession;
        out.close();
        cout << "Added Succesfully " << endl;
    }
};

int main()
{
    // Creating a Object to Use the Class
    EveryThing Sai;
    
    // Making Arrays of Key Dectection for User Comfortability
    int Sarr[2] = {83, 115};
    int Larr[2] = {76, 108};
    int Marr[2] = {77, 109};
    
    // All the Variables of the Main Function
    int Lines = 0;
    char Letter;
    int AsciiValue;
    string Person_Name;
    int Person_Age;
    int Person_Id;
    string Person_Profession;
    string Names;
    
    // Welcoming the User
    cout << "Welcome to the DataBase " << endl;
    cout << "Press the Keys to Perform their Respective Works " << endl;
    cout << "---------------------------------------"<< endl;
    
    // Starting an Infinite Loop
    while(1){
        // Asking the User what he\she wants to do
        cout << "\nWhat Do you Want to Do? " << endl;
        cout << "Search For a Name(S) " << endl;
        cout << "Go Into a Line(L) " << endl;
        cout << "Add a New Member(M) " << endl;
        cout << "Exit(Esc) " << endl;
        Letter = getch();
        AsciiValue = Letter;
        
        // Condition that if S is Pressed then Activate the Search Function
        if (AsciiValue == Sarr[0] || AsciiValue == Sarr[1])
        {
            cout << "Enter the Name you want to Find: " << endl;
            getline(cin, Names);
            Sai.Search(Names);
        }
        
        // Condition that if L is Pressed then Activate the Go Function
        else if (AsciiValue == Larr[0] || AsciiValue == Larr[1])
        {
            cout << "Enter the Line you Want to Go: " << endl;
            cin>> Lines;
            Sai.Go(Lines);
        }
        
        // Condition that if M is Pressed then Activate the Add Function
        else if (AsciiValue == Marr[0] || AsciiValue == Marr[1])
        {
            cout << "Enter the Name of the New Member: " << endl;
            getline(cin, Person_Name);
            
            cout << "Enter the Age of the New Member: " << endl;
            cin>>Person_Age;
            
            cout << "Enter the Id of the Person: " << endl;
            cin>>Person_Id;
            
            cout << "Enter the Hobby of the Person: " << endl;
            cin.ignore();
            getline(cin, Person_Profession);
            
            Sleep(2000);
            Sai.Add(Person_Name,Person_Age, Person_Profession, Person_Id);

        }
        
        // Condition that is Escape Key is Pressed then Exit the Program
        else if (AsciiValue == 27)
        {
            cout << "Exiting the Program in 2 Seconds..... " << endl;
            Sleep(2000);
            break;
        }  
    }   
    
    return 0;
}