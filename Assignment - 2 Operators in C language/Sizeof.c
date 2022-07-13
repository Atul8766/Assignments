#include <stdio.h>

int main(){ 
    int in,a,b,c,d;
    char ch;
    float fl;
    double db;
    a = sizeof(in); 
    b = sizeof(ch); 
    c = sizeof(fl); 
    d = sizeof(db);

    printf("Size of int is %d\n",a); 
    printf("Size of char is %d\n",b); 
    printf("Size of float is %d\n",c); 
    printf("Size of double is %d\n",d); 
    return 0;
}