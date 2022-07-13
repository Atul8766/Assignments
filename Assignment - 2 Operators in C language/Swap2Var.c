#include <stdio.h>

int main(){
    int num1=5,num2=6;
    
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;

    printf("num1 = %d num2 = %d\n",num1,num2);
    return 0;
}