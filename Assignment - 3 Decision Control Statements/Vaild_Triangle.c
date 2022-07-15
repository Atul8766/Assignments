#include <stdio.h>

int main()
{
    int a,b,c,result1,result2,result3;
    printf("Enter Side of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    result1 = a+b;
    result2 = b+c;
    result3 = c+a;
    if(result1 > c && result2 > a && result3 > b )
    {
        printf("Triangle is vaild\n");
    }
    else
    {
        printf("Triangle is not valid\n");
    }
    
    return 0;
}