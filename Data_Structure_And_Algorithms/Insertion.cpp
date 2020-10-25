#include<iostream>

using namespace std;
void Display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
}
void indinseriton(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity){
        cout << "Capacity is Full" << endl;
    }else
    {
        for (int i = size - 1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    Display(arr, size);
    cout << "Insertion is Succesfull" << endl;
    }  
}
int main()
{
    int arr[2] = {1, 3};
    int size = 2, element = 45, index = 2;
    Display(arr, size);
    indinseriton(arr, size, element, 2, index);
    size += 1;
  
    return 0;
}