#include<iostream>

using namespace std;
struct Node
{
    int Data; 
    Node* Next;
};
void Traversal(Node* Head) 
{
    while (Head != NULL) 
    {
        cout << "Element: " << Head->Data << endl;
        Head = Head->Next;
    }
}
Node* InsertEnd(Node* Head,int Data){
    Node* New = new Node;
    Node* New2 = Head;
    New->Data = Data;
    while(New2->Next != NULL){
        New2 = New2->Next;
    }
    New2->Next = New;
    New->Next = NULL;

    return Head;
    
}
int main()
{
    Node* Head = new Node;
    Node* First = new Node;
    Node* Second = new Node;

    Head->Data = 34;
    Head->Next = First;

    First->Data = 54;
    First->Next = Second;

    Second->Data = 75;
    Second->Next = NULL;

    Head = InsertEnd(Head, 45);

    Traversal(Head);
    return 0;
}