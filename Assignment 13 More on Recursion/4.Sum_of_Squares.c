#include <stdio.h> 

int Squaresum(int);

int main(){
   int ans = Squaresum(5);
   printf("%d\n",ans);
}

int Squaresum(int n){
    if (n==1)
    {
        return 1;
    }
    return n*n+Squaresum(n-1);
    
}