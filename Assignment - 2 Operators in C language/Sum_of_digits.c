#include <stdio.h>

int main(){
   int k,sum=0,num=235;
   while(k!=0){
   k = num % 10;
   sum  = sum + k;
   num = num/10;
   }
   printf("%d\n",sum);
    return 0;
}