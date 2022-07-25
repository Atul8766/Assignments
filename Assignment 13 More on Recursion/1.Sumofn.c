#include <stdio.h> 

int sum(int);

int main(){
   int ans = sum(5);
   printf("%d\n",ans);
}

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return n+sum(n-1);
    
}