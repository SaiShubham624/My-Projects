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
Node * DeleteFirst(Node *Head)
{
    struct Node *ptr;
    ptr = Head;
    Head = Head->Next;
    delete ptr;
    return Head;
    
}
// Case 2: Deleting a Node in Between
// Case 3: Deleting the Last Node
// Case 4: Deleting a Node after a Node
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

    DeleteFirst(Head);

    NodeTravesal(Head);
    return 0;
}