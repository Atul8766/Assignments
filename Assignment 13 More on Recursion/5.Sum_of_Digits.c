#include <stdio.h> 

int SumG(int);

int main(){
   int ans = SumG(625);
   printf("%d\n",ans);
}

int SumG(int n){
if(n>0){
   return n%10+SumG(n/10);
}
}