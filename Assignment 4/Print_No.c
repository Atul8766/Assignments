#include <stdio.h>

int main(){
    int num=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (num<=n)
    {
        printf("%d\n",num);
        num++;
    }
    return 0;
    
}