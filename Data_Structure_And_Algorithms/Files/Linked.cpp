#include <iostream>

using namespace std;

// Creating the Class for Node
struct Node
{
    int Data;
    Node *Next;
};

// Creating the Function for Printing the Data
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
    Third->Data = 2;
    Third->Next = Fourth;

    // Fourth Node
    Fourth->Data = 2;
    Fourth->Next = NULL;

    // Calling the Node Traversal Function to Print the Data
    NodeTravesal(Head);

    return 0;
}