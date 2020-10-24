#include <iostream>
using namespace std;
class MyArray
{
private:
    int Total_Size;
    int Used_Size;
    int *ptr;
    

public:
   
    void CreateArray(MyArray *a, int tSize, int uSize)
    {
        a -> Total_Size = tSize;
        a -> Used_Size = uSize;
        a -> ptr = new int[tSize];
    }
    
    void Set(MyArray *a){
        for (int i = 0; i < a -> Used_Size; i++)
        {
            cout << "Enter the " << i << " Number: " << endl;
            cin >> (a -> ptr)[i];
        }
        
    }

void Show(MyArray *a){
        for (int i = 0; i < a -> Used_Size; i++)
        {
            cout << "The Number is " <<(a -> ptr)[i] << endl;
        }
        
    }
};

int main()
{
    
    MyArray Marks;
    Marks.CreateArray(&Marks, 10, 2);
    Marks.Set(&Marks);
    Marks.Show(&Marks);
    return 0;
}