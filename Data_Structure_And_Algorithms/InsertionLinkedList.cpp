#include <iostream>

using namespace std;
struct Node
{
    int Data;
    struct Node *Next;
};

// Creating the Function for Printing the Data
void NodeTravesal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->Data << endl;
        ptr = ptr->Next;
    }
    cout << "Ended the Printing" << endl;
}

// Case 1: Insert at the Beginning
Node *InsertBe(Node *head, int data)
{
    Node *ptr = new Node;
    ptr->Next = head;
    ptr->Data = data;
    return ptr;
}
// Case 2: Insert in Between
Node *InsertIn(int index, Node *Head, int Data)
{
    Node *ptr = new Node;
    Node *p = Head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->Next;
        i++;
    }
    ptr->Data = Data;
    ptr->Next = p->Next;
    p->Next = ptr;
    return Head;
}
// Case 3: Insert at the End
Node *InsertEn(Node *Head, int Data)
{
    Node *ptr = new Node;
    Node *p = Head;
    ptr->Data = Data;
    while (p->Next != NULL)
    {
        p = p->Next;
    }
    p->Next = ptr;
    ptr->Next = NULL;

    return Head;
}
// Case 4: Insert after a Node
Node *InsertAft(Node *Head, Node *node, int Data)
{
    Node *ptr = new Node;
    ptr->Data = Data;

    ptr->Next = node->Next;
    node->Next = ptr;

    return Head;
}

int main()
{
    // Declaring and Allocating the Nodes
    Node *Head = new Node;
    Node *Second = new Node;
    Node *Third = new Node;

    // Setting the Data and Pointers of the Nodes

    // First Node
    Head->Data = 6;
    Head->Next = Second;

    // Second Node
    Second->Data = 8;
    Second->Next = Third;

    // Third Node
    Third->Data = 56;
    Third->Next = NULL;

    // Head = InsertIn(2, Head, 34);

    // Head = InsertBe(Head, 566);

    // Head = InsertEn(Head, 45);

    Head = InsertAft(Head, Second, 56);

    NodeTravesal(Head);

    return 0;
}