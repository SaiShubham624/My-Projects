#include <iostream>

using namespace std;
void Linear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element Found at " << i << endl;
        }
        else if (i == size - 1)
        {
            cout << "Element Not Found" << endl;
        }
    }
}

int BinarySearch(int arr[], int size, int element)
{
    int mid, high = size - 1, low = 0;


    while (low <= high)
    {
mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int Marks[4] = {34, 45, 56, 77};
    // Linear(Marks, 4, 77);
    int size = sizeof(Marks)/sizeof(int);
    int element = 45;
    int Result = BinarySearch(Marks, size, element);
    cout << "The Element is 77 is found at "<< Result << endl;
    return 0;
}