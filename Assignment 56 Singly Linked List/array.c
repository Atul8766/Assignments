#include <stdio.h>

void input(int *, int, int);

int main()
{
    int arr[2][3] = {0};
    input(*arr, 2, 3);
    int *ptr = *arr;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", (*(ptr+i)+j));
        }
        printf("\n");
    }
    return 0;
}

void input(int *p, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",p+i+j);
        }
    }
}