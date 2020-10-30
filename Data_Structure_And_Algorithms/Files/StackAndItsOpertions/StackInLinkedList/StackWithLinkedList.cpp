#include<iostream>

using namespace std;
struct Node
{
    int Data;
    Node* Next;
    
};
Node* Top = NULL;
int IsEmpty(Node* N) {
    if (Top == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

int IsFull(Node* N) {
    Node* p = new Node;
    if (p == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

Node* Push(Node* Ptr, int Data) {
    if(IsFull(Ptr)){
        cout <<" Can't push The Stack is Full " << endl;
    }
    
    Node *N = new Node;
    N->Data = Data;
    N->Next = Top;
    Top = N;
    return Top;
}
int Pop(Node** Ptr) {
    if(IsFull(*Ptr)){
        cout <<" Can't pop The Stack is Empty " << endl;
    }
    
    Node *N = new Node;
    N = Top;
    (*Ptr) = (*Ptr)->Next;
    int X = N->Data;
    delete N;
    return X;
    
}
  

void NodeTravesal(class Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->Data << endl;
        ptr = ptr->Next;
    }
}

int main()
{

    Node *Top = NULL;
    Top = Push(Top, 56);
    Top = Push(Top, 43);
    int Element = Pop(&Top);
    cout << "Popped Element is " << Element << endl;
    NodeTravesal(Top);
    return 0;
}