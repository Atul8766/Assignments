#include <stdio.h>

int main()
{
    char word;
    printf("Enter a alphabet: ");
    scanf("%c", &word);
    if (word >= 65 && word <= 90)
    {
        printf("UpperCase\n");
    }
    else if (word >= 97 && word <= 122)
    {
        printf("lowercase\n");
    }
    else if (word >= 48 && word <= 57)
    {
        printf("Digits\n");
    }

    else
    {
        printf("Special Characters\n");
    }

    return 0;
}