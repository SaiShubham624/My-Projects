#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    int Levels[3];
    string Name;
    cout<<"This is is a Puzzle program"<<endl;
    Sleep(3000);
    cout<<"First Let us Know Your Name"<<endl;
    Sleep(1000);
    cout<<"Enter your Name: ";
    getline(cin, Name);
    Sleep(3000);
    cout<<"Ok Your Name is: "<<Name<<endl;
    Sleep(3000);
    cout<<"Let Start the Game"<<endl;
    Sleep(2000);
    cout<<"Which level you want to play";
    

    return 0;
}