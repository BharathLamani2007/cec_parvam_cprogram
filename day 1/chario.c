#include<stdio.h>
int main(void)
{
    int ch;
    printf("Enter a character:");
    ch=getchar(); //read single character
    printf("you enterd:");
    putchar(ch);
    putchar('\n');
    return 0;
}