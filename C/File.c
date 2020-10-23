#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr = fopen("Sample.txt", 'w');
    fscanf(ptr, "%d", &num);
    printf("The Value is %d", num);
    return 0;
}