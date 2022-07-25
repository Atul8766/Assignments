#include <stdio.h> 

void print(int);

int main(){
   print(10);
}

void print(int n){
 if (n>0)
 {
    print(n-1); 
    printf("%d ",n*n);
 }    
}