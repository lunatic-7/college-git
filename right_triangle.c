#include <stdio.h>

int main()
{
    int a = 7;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}