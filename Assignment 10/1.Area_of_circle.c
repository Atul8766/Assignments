#include <stdio.h>

float Area(float);
int main()
{
    printf("Area of circle is %.2f\n",Area(5));
    return 0;
}

float Area(float n)
{
    float area;
    float pie=22.7;
    area = pie*n*n;
    return area;
}