#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("Value of x=%d\n",x);
    printf("Address of x=%p\n",&x);
    printf("Value stored in p=%p\n",p);
    printf("Value at address p=%d\n",*p);
    return 0;
}