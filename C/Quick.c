#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));
    for(int i = 0; i < 5; i++){
        printf("Enter the Value: ");
        scanf("%f", &ptr[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("The Value of %d is %f ",i, ptr[i]);
    }
    return 0;
}