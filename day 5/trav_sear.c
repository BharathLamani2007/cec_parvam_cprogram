#include<stdio.h>
int main(void)
{
    int marks[5]={78,95,60,88,72};
    int i;
    int max=marks[0];
    int min=marks[0];
    int searchvalue=88;
    int foundIndex=-1;
    printf("Array elements (Traversing):\n");

    for (i=0;i<5;i++);
    {
        printf("marks[%d]=%d\n",i,marks[i]);
    }
    for (i=1;i<5;i++)
    {
        if (marks[i]>max)
        {
            max=marks[i];
        
        }
        if (marks[i]<min)
        {
            min=marks[i];
        }
    }
    printf("\nmaximum mark=%d\n",max);
    printf("manimum mark=%d\n",min);
    for (i=0;i<5;i++)
    {
        if (marks[i]==searchvalue)
        {
            foundIndex=i;
            break;
        }
    }
    if (foundIndex != -1) {
        printf("Value %d found at index %d\n", searchvalue, foundIndex);
    } else {
        printf("Value %d not found in the array\n", searchvalue);
    }
    return 0;
}