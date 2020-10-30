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
Node* InsertBe(Node* Head, int Data){
    Node* New = new Node;
    New->Data = Data;
    New->Next = Head;
    Head = New;
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

    Head = InsertBe(Head, 45);

    Traversal(Head);
    return 0;
}