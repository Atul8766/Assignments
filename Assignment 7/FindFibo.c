#include <stdio.h>

int main()
{
    int i,a=0,b=1,c=0,n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1; 1; i++){
        c = a+b;
        a=b;
        b=c;
    if (c==n)
    {
        printf("Found\n");
        break; 
    }
    if(c>n)
    {
        printf("Not Found\n");
        break;
    }
    }
   
    return 0;
}