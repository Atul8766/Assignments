#include <stdio.h>

int main()
{
    int num,sum=0,x;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        sum = sum+i;
    }
    printf("%d\n",sum);
    return 0;
}