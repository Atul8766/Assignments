#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("%d is Divisible by 5\n",num);
    }
    else
    {
        printf("%d is not Divisble by 5\n",num);
    }
    return 0;
}