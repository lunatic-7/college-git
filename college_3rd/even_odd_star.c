#include <stdio.h>

int evenStar()
{
    int num[4];
    int size;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter your index number [%d]: ", i);
        scanf("%d", &num[i]);
    }

    size = sizeof(num) / sizeof(int);

    for (int i = 0; i < 4; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("* ");
        }

        else
        {
            printf("%d ", num[i]);
        }
    }
}

int oddStar()
{
    int num[4];
    int size;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter your index number [%d]: ", i);
        scanf("%d", &num[i]);
    }

    size = sizeof(num) / sizeof(int);

    for (int i = 0; i < 4; i++)
    {
        if (num[i] % 2 != 0)
        {
            printf("* ");
        }

        else
        {
            printf("%d ", num[i]);
        }
    }
}

int main()
{
    int func;

    printf("Enter 1 to change even values to * or Enter 2 to change odd values to *: ");
    scanf("%d", &func);

    switch (func)
    {
    case 1:
        evenStar();
        break;

    case 2:
        oddStar();
        break;
    default:
        printf("Please enter a valid number");
        break;
    }

    return 0;
}