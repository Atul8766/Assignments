#include <stdio.h> 

int Fact(int);

int main(){
   int ans = Fact(5);
   printf("%d\n",ans);
}

int Fact(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*Fact(n-1);
    
}