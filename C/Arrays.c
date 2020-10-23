#include<stdio.h>
#include<string.h>
struct Human
    {
        int Id;
        int Salary ;
        char Name[30];
    };
int main(){
    // int marks[] = {45, 67, 34, 25};
    /* marks[0] = 56;
    marks[1] = 46;
    marks[2] = 66;
     marks[3] = 86;*/
    // for(int i = 0; i < 5; i++){
    //     printf("%d\n", marks[i]);
    // }
    
    char Name[] = "Harry";
     
    struct Human e1;
    e1.Id = 34;
    e1.Salary = 34000;
    strcpy(e1.Name, "Sai Shubham Ray");
    printf("The Name of the Employee is %s\n", e1.Name);
    printf("The Salary of the Empoyee is %d\n", e1.Salary);
    printf("The Id of the Employee is %d\n", e1.Id);
   
    
    return 0;
}