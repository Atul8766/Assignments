#include <stdio.h> 

int Evensum(int);

int main(){
   int ans = Evensum(5);
   printf("%d\n",ans);
}

int Evensum(int n){
    if (n==0)
    {
        return 0;
    }
    return n*2+Evensum(n-1);
    
}