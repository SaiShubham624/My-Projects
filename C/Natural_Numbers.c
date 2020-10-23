#include<stdio.h>
int Natural(int n){
    if(n == 1){
        return 1;
    }
    return n + Natural(n - 1);
}
int main(){
    int Result = Natural(3);
    printf("The Sum of First Three Natural Numbers is %d \n", Result);
    return 0;
}