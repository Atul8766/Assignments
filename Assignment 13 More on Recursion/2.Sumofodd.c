#include <stdio.h> 

int oddsum(int);

int main(){
   int ans = oddsum(3);
   printf("%d\n",ans);
}

int oddsum(int n){
    if (n==1)
    {
        return 1;
    }
    return n*2-1+oddsum(n-1);
    
}