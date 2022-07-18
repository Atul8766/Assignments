#include <stdio.h>

int main()
{
    int count=0,num,k;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        k = num%10;
        count++;
        num = num/10;
    }
    printf("%d Digits\n",count);
    
    return 0;
}