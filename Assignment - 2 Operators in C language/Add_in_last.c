#include <stdio.h>

int main(){
    int num,digit;
    printf("Enter a number and digit: ");
    scanf("%d%d",&num,&digit);
    num = num/10;
    num = num+digit;
    printf("Expected output: %d\n",num);
    return 0;
}
