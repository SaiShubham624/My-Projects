#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int Data;
    struct Node * Next;
}Node;
void Traversal(Node *ptr, int size){
    for(int i = 0; i > size; i++){
        printf("Element %d: %d \n",i+1 ,*ptr);
        ptr = ptr->Next;
    }
    while(ptr != NULL){
        ptr = ptr->Next;
    }
    for (int i = size; i > 0; i--)
    {
        printf("%d", *ptr);
        
    }
    

    
}
int main(){
    
    Node *Head;
    Node *First;
    Node *Second;

    Head = (struct Node *) malloc(sizeof(struct Node));
    First = (struct Node *) malloc(sizeof(struct Node));
    Second = (struct Node *) malloc(sizeof(struct Node));

    printf("Enter the First Element: ");
    scanf("%d", &Head->Data);
    Head->Next = First;
    
    printf("Enter the Second Element: ");
    scanf("%d", &First->Data);
    First->Next = Second;
    
    printf("Enter the Third Element: ");
    scanf("%d", &Second->Data);
    Second->Next = NULL;
    
    Traversal(Head, 3);
    
    return 0;
}