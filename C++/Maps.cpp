#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::map;
using std::endl;
using std::getline;

int main()
{
    
    map<string, int> Student_Id;
    Student_Id["Sai Shubham Ray"] = 6308;
    Student_Id["Sanket Ray"] = 5308;
    Student_Id["Ansh Kumar"] = 2304;
    map<string, int>::iterator Iter;
    for (Iter = Student_Id.begin; Iter < Student_Id.size; Iter++)
    {
        printf("%s Id is %d and This is a Good Id", Iter->first, Iter->second);
    }
    


    return 0;
}