#include<stdio.h>
struct student
{
    int age;
    float marks;
};
int main()
{
    int intvar=10;
    float floatvar=5.5;
    char charvar='A';
    struct student s1={20,88.5};
    int *pInt=&intvar;
    float *pFloat=&floatvar;
    char *pChar=&charvar;
    struct student *pStudent=&s1;
    printf("Integer via pointer: %d\n",*pInt);
    printf("Float via pointer: %.1f\n",*pFloat);
    printf("char via pointer: %c\n",*pChar);
    printf("Student age via pointer: %d\n",pStudent->age);
    printf("Student marks via pointer: %.1f\n",pStudent->marks);
    return 0;
}