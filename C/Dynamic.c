#include<stdio.h>
#include<stdlib.h>

int main(){ // Malloc 
    int *ptr;
    ptr = (int *) malloc(2 * sizeof(int));
    // printf("The Value of int is %d \n", sizeof(int));
    for (int s = 0; s < 2; s++)
    {
        printf("Enter the Value of %d integer: ", s);
        scanf("%d", &ptr[s]);
    }
    for (int s = 0; s < 2; s++)
    {
        printf("The Value of %d integer is %d \n", s, ptr[s]);
    }
    
    return 0;
}
