#include <stdio.h>

int GD(int,int);
int main()
{
    int num1,num2,ans;
    printf("Enter any number: ");
    scanf("%d",&num1);
    printf("Enter how many digits it contains: ");
    scanf("%d",&num2);
    ans = GD(num1,num2);
    printf("%d\n",ans);
    return 0;
}

int GD(int n,int d)
{
   int k,new=n;
   while (n!=0)
   {
      k = n%10;
      d++;
      n = n/10;
   }
   if (n==d)
   {
    return 1;
   }
   else
   {
    return 0;
   }
   
}