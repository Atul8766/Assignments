#include <stdio.h>  

int main()
{
    int k,num,sc=0,count=0,check;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter same number again: ");
    scanf("%d",&check);
    if (num<=9)
    {
        printf("%d is Armstrong Number\n",num);
    }
    if (num>=10 && num<=99)
    {
        while(num!=0){
        k = num%10;
        sc = sc+k*k;
        num = num/10;
        }
        if (check==sc)
        {
            printf("%d is Armstrong Number\n",sc);
        }
        else
        {
            printf("%d is Not An Armstrong Number\n",check);
        }
    }

    if (num>=100 && num<=999)
    {
        while(num!=0){
        k = num%10;
        sc = sc+k*k*k;
        num = num/10;
        }
        if (sc==check)
        {
            printf("%d is Armstrong Number\n",sc);
        }
        else
        {
            printf("%d Not An Armstrong Number\n",check);
        }
        
    }
    return 0;
}