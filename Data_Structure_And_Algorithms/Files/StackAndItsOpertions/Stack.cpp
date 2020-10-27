#include<iostream>

using namespace std;

struct Stack
{
    int Size;
    int Top;
    int * Arr;
};

int IsEmpty(Stack *Ptr){
    if(Ptr->Top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int IsFull(Stack *Ptr){
    if(Ptr->Top == Ptr->Size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int Push(Stack *Ptr, int Data, int Index){
    if(IsEmpty(Ptr) == 1){
        cout << "Stack is Full";
        return 1;
    }else{
        Ptr->Arr[Index] = Data;
        Ptr->Top++;
        return 0;
    }
}

int main()
{
    // Stack S;
    // S.Size = 80;
    // S.Top =
 -1;
    // S.Arr = new int[S.Size];
    Stack *S = new Stack;
    S->Size = 4;
    S->Top = -1;
    S->Arr = new int[S->Size];
    
    S->Arr[0] = 4;
    S->Top++;
    S->Arr[1] = 5;
    S->Top++;
    S->Arr[2] = 6;
    S->Top++;
    
    if(IsFull(S)){
        cout << "The Stack is Full" << endl;
    }else{
        cout << "The Stack is Not Full" << endl;
    }
   
   

    return 0;
}