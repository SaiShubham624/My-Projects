#include <iostream>
using namespace std;

class Array
{
private:
    int Used_Size = 0;
    int Total_Size;
    int *ptr;

public:
    Array(int T_Size)
    {
        Total_Size = T_Size;
        ptr = new int[T_Size];
    }
    ~Array()
    {
    }
    void Insert(int Data, int Index)
    {
        if (Used_Size >= Total_Size)
        {
            cout << "Capacity is Full" << endl;
        }
        for (int i = Used_Size; i >= Index; i--)
        {
            ptr[i + 1] = ptr[i];
        }
        ptr[Index] = Data;
        Used_Size++;
    }
    void Delete(int Index)
    {
        for (int i = Index; i < Used_Size; i++)
        {
            ptr[i] = ptr[i + 1];
        }
        Used_Size--;
    }
    void Append(int Data)
    {
        static int k = 0;
        while (k != Used_Size)
        {
            k++;
        }
        ptr[k++] = Data;
        Used_Size++;
        
        
    }
    void Print()
    {
        for (int j = 0; j < Used_Size; j++)
        {
            cout << "The " << j + 1 << " element is " << ptr[j] << endl;
        }
    }
};
