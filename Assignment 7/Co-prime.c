#include <stdio.h>

int main()
{
    int i,n,k,ans;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&n,&k);
    for(i=1; i<k+n; i++){
        if(n%i==0 && k%i==0){
            ans = i;
        }
    }
    if (ans == 1)
    {
        printf("Co-Prime\n");
    }
    else
    {
        printf("Not Co-Prime\n");
    }
    
    
    
    return 0;
}