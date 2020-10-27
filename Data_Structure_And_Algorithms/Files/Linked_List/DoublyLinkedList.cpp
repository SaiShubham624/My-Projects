#include<iostream>
using namespace std;

struct Node
{
    int Data;
    Node *Prev;
    Node *Next;
};

void Traversal(Node *Head, Node *Tail){
    static int Count = 1;
    while (Head != NULL)
    {
        cout << "Element "<< Count <<": "<<Head->Data<<endl;
        Head = Head->Next;
        Count++;
    }
    cout << "Now Reversing" << endl;
    
    while (Tail != NULL)
    {
        cout << "Element "<< Count-1 <<": "<<Tail->Data<<endl;
        Tail = Tail->Prev;
        Count--;
    }

    
}

int main()
{
    Node *Head = new Node;
    Node *First = new Node;
    Node *Second = new Node;
    Node *Third = new Node;

    Head->Prev = NULL;
    Head->Data = 3;
    Head->Next = First;
    
    First->Prev = Head;
    First->Data = 5;
    First->Next = Second;
    
    Second->Prev = First;
    Second->Data = 67;
    Second->Next = Third;

    Third->Prev = Second;
    Third->Data = 45;
    Third->Next = NULL;

    Traversal(Head, Third);
    return 0;
}