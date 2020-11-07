#include<iostream>
#include<list>
 // Namespaces Which are Being Used

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::list;


void Display(list<int>& l) {
    list<int> ::iterator TempIter;
    for (TempIter = l.begin(); TempIter != l.end(); TempIter++)
    {
        cout << *TempIter << " ";
    }
    cout << endl;

}

int main()
{
    list<int> List1;
    List1.push_back(5);
    List1.push_back(7);
    List1.push_back(234);

    Display(List1);
    return 0;
}