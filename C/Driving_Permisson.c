#include<stdio.h>

int main(){
    int age;
    printf("Enter your Number: ");
    scanf("%d", &age);
    if(age < 18){
        printf("You are Not Able to Drive\n");
    }else if (age == 18)
    {
        printf("You Can Drive But not More\n");
    }else{
        printf("You can drive freely\n");
    }
    
    return 0;
}