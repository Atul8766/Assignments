#include <stdio.h>

int main()
{
    int i,n,k,ans;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&n,&k);
    for(i=1; i<k; i++){
        if(n%i==0 && k%i==0){
            ans = i;
        }
    }
    printf("HCF of %d and %d is %d\n",n,k,ans);
    return 0;
}