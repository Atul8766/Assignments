#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    while(1){
    printf("\nEnter a Number: ");
    
    scanf("%d",&num);
    switch (num)
    {
    case 1: printf("31 Days");
        break;
    case 2: printf("28 Days if leap year than 29 Days");
        break;
    case 3: printf("31 Days");
        break;
    case 4: printf("30 Days");
        break;            
    case 5: printf("31 Days");
        break;
    case 6: printf("30 Days");
        break;
    case 7: printf("31 Days");
        break;
    case 8: printf("31 Days");
        break;
    case 9: printf("30 Days");
        break;
    case 10: printf("31 Days");
        break;
    case 11: printf("30 Days");
        break;         
    case 12: printf("31 Days");
        break;
    case 13: exit(0);                   
    default: printf("Invalid Choice");
        break;
    }
    }
    printf("\n");

    return 0;
}