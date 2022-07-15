#include <stdio.h>

int main(){
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = num&1;
    if (result == 1)
    {
        printf("Odd\n");
    }
    else
    {
        printf("Even\n");
    }
    
    return 0;
}