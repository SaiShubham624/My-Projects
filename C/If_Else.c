#include<stdio.h>

int main(){
    printf("This is a If_Else Program\n"); 
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("The Number is Even\n");
    }else{
        printf("The Number is Odd\n"); 
    }
    return 0;
}