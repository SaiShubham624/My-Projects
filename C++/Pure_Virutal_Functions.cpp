#include<iostream>

using namespace std;

class Base{
    protected:
        int Age;
        string Name;
        float Height;
        float Weight;
    public:
        void SetName(string Name){
            this->Name = Name;
        }
        void SetAge(int Age){
            this->Age = Age;
        }
        void SetCharateristics(float Height, float Weight){
            this->Height = Height;
            this->Weight = Weight;
        }
        void Display_All(){
            cout << "The Name of this Person is " << Name << endl;
            cout << "The Age of this Person is " << Age << endl;
            cout << "The Height of this Person is " << Height << endl;
            cout << "The Weight of this Person is " << Weight << endl;
        }
};

class Derived : public Base{
    private:
        string Type;
    public:
        void SetType(string Type){
            this->Type = Type;
            cout << "The Type of this Animal is " << Type << endl;
        }
};

int main()
{
    /*
    string Person_Name;
    int Person_Age;
    float Person_Height;
    float Person_Weight;
    cout << "Enter the Name of Yours: ";
    getline(cin, Person_Name);

    cout << "Enter the Age of Yours: ";
    cin >> Person_Age;
    
    cout << "Enter the Height of Yours: ";
    cin >> Person_Height;
    cout << "Enter the Weight of Yours: ";
    cin >> Person_Weight;

    cout << endl;
    Base Person;

    Person.SetName(Person_Name);
    Person.SetAge(Person_Age);
    Person.SetCharateristics(Person_Height, Person_Weight);
    Person.Display_All();
    */
   
    return 0;
}