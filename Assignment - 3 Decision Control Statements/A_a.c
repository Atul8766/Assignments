#include <stdio.h>

int main(){
    char word;
    printf("Enter a alphabet: ");
    scanf("%c",&word);
    if (word>=65 && word<=90)
    {
        printf("UpperCase\n");
    }
    if (word>=97 && word<=120)
    {
        printf("lowercase\n");
    }
    
    
    return 0;
}