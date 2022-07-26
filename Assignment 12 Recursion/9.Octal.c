#include <stdio.h> 

void Octal(int);

int main(){
   Octal(100);
   printf("\n");
   return 0;
}

void Octal(int n){
   if (n>0)
   {
      Octal(n/8); 
      printf("%d",n%8);
   }
   
}