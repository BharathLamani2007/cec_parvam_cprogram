#include<stdio.h>
int main()
{
    int arr [5]={10,2030,40,50};
    int search=30;
    int found=0;
    for (int i=0;i<5;i++)
    {
        if (arr[i]==search)
        {
            printf("value %d found at index %d\n",search,i);
            found=1;
            break;
        }
    }
             if(! found)
             {
                 printf("the value not found\n");
              }
    return 0;
}