#include <stdio.h>

int main()
{
    int a = 7;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    int m = 1;

    for (int i = a; i >= 1; i--)
    {
        for (int j = 2; j <= m; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        m++;
        printf("\n");
    }

    return 0;
}