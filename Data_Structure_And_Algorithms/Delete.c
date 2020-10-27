#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
void Traversal(Node* Head){
    while(Head->next != NULL){
        printf("Element: %d", Head->data);
        Head = Head->next;
    }
}
Node * Delete(Node* Head){
    Node* ptr = Head;
    Head = Head->next;
    free(ptr);
    return Head;
}
int main(){
    Node* Head;
    Node* First;
    Node* Second;
    Node* Third;

    Head = (Node *) malloc(sizeof(struct Node));
    First = (Node *) malloc(sizeof(struct Node));
    Second = (Node *) malloc(sizeof(struct Node));
    Third = (Node *) malloc(sizeof(struct Node));

    Head->data = 3;
    Head->next = First;

    First->data = 4;
    First->next = Second;

    Second->data = 5;
    Second->next = Third;

    Third->data = 7;
    Third->next = NULL;
    Delete(Head);
    
    Traversal(Head);

    return 0;
}