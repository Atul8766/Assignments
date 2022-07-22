#include <stdio.h>

int main()
{
    int i,a=0,b=1,c=0,n;
    printf("Enter N Term: ");
    scanf("%d",&n);
    printf("1 ");
    for(i=1; i<n; i++){
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }

    return 0;
}