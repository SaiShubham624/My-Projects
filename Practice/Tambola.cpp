#include <iostream>
#include <cstdlib>

int Insertion (int arr[], int size, int capacity, int element, int index){
 if(size >= capacity){
   return -1;
 }else{
   for(int i = size - 1; i > index; i--){
     arr[i] = arr[i - 1];
   }
   arr[index] = element;
   return 1;
 }
 
}
int Deletion(int arr[], int size, int index){
  for(int i = index; i < size - 1; i++){
    arr[i] = arr[i + 1];
  }
  return i;
}
int main (){
    cout << "Hi" << endl;
    cout << "This is a Tambola Counter " << endl;
    int arr[91];
   int count;
    while(count == 91){
      
    }
  
    return 0;
}