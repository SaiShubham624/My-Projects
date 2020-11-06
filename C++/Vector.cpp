#include <iostream>
#include <vector>

#pragma region // Namespaces which are being used
using std::cout;
using std::endl;
using std::cin;
using std::vector;
#pragma endregion
template <class T>
void Display(vector<T>& Vec){
    cout << "Displaying the Vector" << endl;
    for (int i = 0; i < Vec.size(); i++)
    {
        cout << Vec[i] << "  ";
    }
    cout << endl;
    
}
int main()
{
    vector<int> MyVec;
    MyVec.push_back(3);
    MyVec.push_back(13);
    MyVec.push_back(43);
    MyVec.push_back(453);
    Display<int>(MyVec);
    return 0;
}