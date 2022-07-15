#include <stdio.h>

int main(){
    int result,num;
    printf("Enter three digit no: ");
    scanf("%d",&num);
    result = printf("%d",num);

    if (result == 3)
    {
        printf("\nYou are right\n");
    }
    else
    {
        printf("\nSorry you enterd more than digits or may be less than three Digits\n");
    }
    
    
    return 0;
}