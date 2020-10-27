#include <iostream>

using namespace std;
struct Node
{
    int Data;
    Node *Next;
};

void NodeTravesal(class Node *Head)
{
    Node *ptr = Head;
    int count = 1;
    do
    {
        cout << "Element " << count << ": " << ptr->Data << endl;
        ptr = ptr->Next;
        count++;
    } while (ptr != Head);
}
Node *Insert(Node *Head, int data)
{
    Node *ptr = new Node;
    ptr->Data = data;
    Node *P = Head->Next;
    while (P->Next != Head)
    {
        P = P->Next;
    }
    P->Next = ptr;
    ptr->Next = Head;
    Head = ptr;
    return Head;
}

int main()
{
    // Declaring and Allocating The Nodes
    Node *Head = new Node;
    Node *Second = new Node;
    Node *Third = new Node;
    Node *Fourth = new Node;

    // Setting the Data of the Nodes

    // Head Node
    Head->Data = 7;
    Head->Next = Second;

    // Second Node
    Second->Data = 5;
    Second->Next = Third;

    // Third Node
    Third->Data = 4;
    Third->Next = Fourth;

    // Fourth Node
    Fourth->Data = 2;
    Fourth->Next = Head;

    // Using the Inserting Method
    Head = Insert(Head, 45);

    // Calling the Node Traversal Function to Print the Data
    NodeTravesal(Head);
    return 0;
}