#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);
    // M 1
    if (a >= b)
    {
        if (a > c)
        {
            printf("a: %d is greatest\n", a);    
        }
        else if (c > a)
        {
            printf("c: %d is greatest\n", c);
        }
    }
    else if (b >= a)
    {
        if (b > c)
        {
            printf("b: %d is greatest\n", b);
        }
        else if (c > b)
        {
            printf("c: %d is greatest\n", c);
        }
    }

  
    // M 2
    if (a >= b)
    {
        (a > c) ? printf("a: %d is greatest\n", a) : printf("c: %d is greatest\n", c);
    }
    else if (b >= a)
    {
        (b > c) ? printf("b: %d is greatest\n", b) : printf("c: %d is greatest\n", c);
    }

    // M 3
    if ((a >= b) && (a > c))
    {
        printf("a: %d is greatest\n", a);
    }
    else if ((b >= a) && (b > c))
    {
        printf("b: %d is greatest\n", b);
    }
    else
    {
        printf("c: %d is greatest\n", c);
    }

    return 0;
}