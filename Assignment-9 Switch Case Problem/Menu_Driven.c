#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num,a,b;
    while(1){
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multplication");
    printf("\n4. Division");
    printf("\n5. Exit");

    printf("\nEnter a Number: ");
    
    scanf("%d",&num);
    switch (num)
    {
    case 1: printf("Enter two Numbers: ");
            scanf("%d %d",&a,&b);
            printf("Sum of %d and %d is %d\n",a,b,a+b);
        break;
    case 2: printf("Enter two Numbers: ");
            scanf("%d %d",&a,&b);
            printf("Difference of %d and %d is %d\n",a,b,a-b);
        break;
    case 3: printf("Enter two Numbers: ");
            scanf("%d %d",&a,&b);
            printf("Product of %d and %d is %d\n",a,b,a*b);
        break;
    case 4: printf("Enter two Numbers: ");
            scanf("%d %d",&a,&b);
            printf("Quotient of %d and %d is %d\n",a,b,a/b);
        break;            
    case 5: printf("Thank You\n");
             exit(0);                  
    default: printf("Invalid Choice\n");
        break;
    }
    }
    printf("\n");

    return 0;
}