#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("%d is greater\n",num1);
    }
    else if (num1==num2)
    {
        printf("%d both numbers are equal\n",num1);
    }
    else
    {
        printf("%d is greater\n",num2);
    }
    return 0;
}