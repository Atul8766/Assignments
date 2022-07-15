#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%3==0 && num%2==0)
    {
        printf("%d Yes it is divisble\n",num);
    }
    else
    {
        printf("%d No it is not divisble\n",num);
    }
    return 0;
}