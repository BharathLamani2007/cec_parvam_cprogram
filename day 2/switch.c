#include<stdio.h>
int main()
{
    int choice;
    printf("1.add\n2. Subtract\n3. Multply\n4. division\nEnter choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: 
        printf("You selected ADD\n");
        break;
        case 2: 
        printf("You selected SUBTRACT\n");
        break;
        case 3: 
        printf("You selected MULTPLY\n");
        break;
        case 4: 
        printf("You selected DIVISION\n");
        break;
        default:
        printf("Invalid choice\n");
    }
    return 0;
}