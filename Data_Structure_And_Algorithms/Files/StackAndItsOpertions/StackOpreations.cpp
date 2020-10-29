#include <iostream>
using namespace std;

// Creating Stack for Getting Started
struct Stack
{
    int Size;
    int Top;
    int *Arr;
};

// Creating a Function to chekc whether a given Stack is Empty or Not
int IsEmpty(Stack *Ptr)
{
    if (Ptr->Top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Creating a Function to chekc whether a given Stack is Full or Not
int IsFull(Stack *Ptr)
{

    if (Ptr->Top == Ptr->Size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Creating a Push Function to Push Elements into the Stack
void Push(Stack *Ptr, int Data)
{
    int Result = IsFull(Ptr);
    if (Result == 1)
    {
        cout << "Can't Push " << Data << " The Stack is Full" << endl;
    }
    else
    {
        Ptr->Top++;
        Ptr->Arr[Ptr->Top] = Data;
    }
}

// Creating a Push Function to Pop Elements from the Stack
int Pop(Stack *Ptr)
{
    if (IsEmpty(Ptr))
    {
        cout << "Can't Pop The Stack is Empty" << endl;
        return -1;
    }
    else
    {
        int Val = Ptr->Arr[Ptr->Top];
        int Val2 = Ptr->Arr[Ptr->Top--];
        return Val2;
    }
}

// Creating a Peek Function to check the element in a stack at a given Index
int Peek(Stack *Ptr, int I)
{
    int Val = Ptr->Top - I + 1;
    if (Val < 0)
    {
        return -1;
    }
    else
    {
        return Ptr->Arr[Val];
    }
}
// Driver Program
int main()
{

    cout << "Hi I am Sai Shubham " << endl;
    Stack *S = new Stack;
    S->Size = 4;
    S->Top = -1;
    S->Arr = new int[S->Size];
    Push(S, 34);
    Push(S, 24);
    Push(S, 45);
    Push(S, 56);
    cout << "Popped " << Pop(S) << " From the Stack" << endl;
    for (int j = 1; j <= S->Top + 1; j++)
    {
        cout << "The Number at the Position " << j << " is " << Peek(S, j) << endl;
    }

    return 0;
}