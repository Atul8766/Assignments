#include <stdio.h> 

void Binary(int);

int main(){
   Binary(10);
   printf("\n");
   return 0;
}

void Binary(int n){
   if (n>0)
   {
      Binary(n/2); 
      printf("%d",n%2);
   }
   
}