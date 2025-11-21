#include<stdio.h>
int main(){

    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num)
    {
        printf("Non-zero value treated as true\n");
    }
    else
    {
        printf("zero treated as false\n");

    }
    if(num > 0)
    {
        if(num % 2 == 0)
        
          printf("Positive even number\n");
        else
          printf("Positive odd number\n");
        
    }
    else
    {
        printf("Number is zero or negative\n");
    }
    return 0;
}