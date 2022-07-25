#include <stdio.h> 

void print(int);

int main(){
   print(10);
}

void print(int n){
 if (n>0)
 {
    printf("%d ",n);
    print(n-1);
 }
 
    
}