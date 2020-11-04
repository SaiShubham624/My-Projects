#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string Name;
    string Name2;
    cout << "Enter your Name: " << endl;
    getline(cin, Name);
    cout << "Okay so your Name is " << Name << endl;
    cout << "It Has " << Name.length() << " characters"<<endl;
    cout << "Do you want something into your Name? " << endl;
    getline(cin, Name2);
    if(Name2 == ""){
        cout << "You Decided not to Append something in your Name" << endl;
    }else
    {
        cout << "Now your Name is " << Name.append(" " + Name2) << endl;
    }
    
    
    return 0;
}