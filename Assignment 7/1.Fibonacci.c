#include <stdio.h>

int main()
{
    int i,a=0,b=1,c=0,n;
    printf("Enter Nth Term: ");
    scanf("%d",&n);
    for(i=1; i<n; i++){
        c = a+b;
        a=b;
        b=c;
    }
    printf("%d\n",c);

    return 0;
}