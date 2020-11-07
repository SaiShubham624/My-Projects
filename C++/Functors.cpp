#include<iostream>
#include<functional>
#include<algorithm>


using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main()
{
    cout << "Hello this is Sai " << endl;
    int arr[] = {23, 433, 234};
    std::sort(arr, arr+3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "  " ;
    }
    
    return 0;
}
