#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    
    printf("\nEnter a Number: ");
    
    scanf("%d",&num);
    switch (num)
    {
    case 1: printf(". Do not store your dreams in your eyes.\n");
        break;
    case 2: printf(". May God be with you today and always.\n");
        break;
    case 3: printf(". Have hope in God and start your day with positive thoughts.\n");
        break;
    case 4: printf(". Always have a positive attitude and be happy. Have a great day.\n");
        break;            
    case 5: printf(". We are creators of our own happiness. Have a positive and great day.\n");
        break;
    case 6: printf(". Life is short, make it colorful and beautiful. Have a great joyful day.\n");
        break;
    case 7: printf(". Planning the day makes it easier to follow, here's to another great day!\n");
        break;                  
    default: printf("Invalid Choice");
        break;
    }
    printf("\n");

    return 0;
}