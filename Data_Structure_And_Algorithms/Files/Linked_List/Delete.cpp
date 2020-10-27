#include <iostream>

using namespace std;
struct Node
{
    int Data;
    struct Node *Next;
};

void NodeTravesal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->Data << endl;
        ptr = ptr->Next;
    }
    cout << "Ended the Printing" << endl;
}

// Case 1: Deleting the First Node
Node *DeleteFirst(Node *Head)
{
    struct Node *ptr = Head;
    Head = Head->Next;
    delete ptr;
    return Head;
}

// Case 2: Deleting a Node in Between
Node *DeleteIndex(Node *Head, int Index)
{
    Node *ptr = Head;
    Node *q = Head->Next;
    for (int i = 0; i < Index - 1; i++)
    {
        ptr = ptr->Next;
        q = q->Next;
    }
    ptr->Next = q->Next;
    delete q;
    return Head;
}

// Case 3: Deleting the Last Node
Node *DeleteEnd(Node *Head)
{
    Node *p = Head;
    Node *q = Head->Next;
    while (q->Next != NULL)
    {
       p = p->Next;
       q = q->Next;
    }
    p->Next = NULL;
    delete q;
    
    return Head;
    
    
}

// Case 4: Deleting a Node after a Node
Node *DeleteValue(Node *Head, int Value){
    Node *ptr = Head;
    Node *q = Head->Next;
    while (q->Data != Value && q->Next != NULL)
    {
        ptr = ptr->Next;
        q = q->Next;
    }
    if (q->Data == Value)
    {
        ptr->Next = q->Next;
        delete q;
    }
    return Head;
}


int main()
{
    Node *Head = new Node;
    Node *First = new Node;
    Node *Second = new Node;
    Node *Third = new Node;

    Head->Data = 3;
    Head->Next = First;

    First->Data = 4;
    First->Next = Second;

    Second->Data = 5;
    Second->Next = Third;

    Third->Data = 7;
    Third->Next = NULL;

    Head = DeleteValue(Head, 5);
    NodeTravesal(Head);
    return 0;
}