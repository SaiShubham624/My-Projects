#include <iostream>

using namespace std;
void Display(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl ;
    }
    cout << "Ended" << endl;
}

void indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[20] = {1, 3, 5, 7, 56};
    int size = 5, index = 2;
    Display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    Display(arr, size);
    return 0;
}