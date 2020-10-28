#include<iostream>

using namespace std;
struct Stack{
    int Size;
    int Top;
    int* Arr;
};
void IsEmpty(Stack *Ptr){
if(Ptr->Top == -1){
        cout << "The Stack is Empty " << endl;
    }else{
        cout << "The Stack is Not Empty It has "<< Ptr->Top+1 << " Elements" << endl;
    }
}
void IsFull(Stack *Ptr){
   static int Count;
    if(Ptr->Top == Ptr->Size - 1){
        cout << "The Stack is Full" << endl;
        Count = 1;
    }else{
        cout << "The Stack is Not Full" << endl;
        Count = 0;
    }
}
void Push(Stack *Ptr, int Data){
  if(Count == 1){
    cout << "Can't Push The Stack is Full" << endl;
  }else{
    Ptr->Arr[Ptr->Top+1] = Data;
    Ptr->Top++;
  }
  
}

int main()
{
    Stack *S = new Stack;
    S->Size = 30;
    S->Top = -1;
    S->Arr = new int[S->Size];
    S->Arr[0] = 34;
    S->Top++;
    S->Arr[1] = 24;
    S->Top++;
    IsEmpty(S);
    
    
    return 0;
}