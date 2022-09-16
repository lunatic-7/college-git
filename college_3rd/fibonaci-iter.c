#include <stdio.h>

void fibonacci(int num)
{

    int prev = 0;
    int next = 1;
    int sum;

    if (num >= 1)
    {
        printf("%d ", prev);
    }

    if (num >= 2)
    {
        printf("%d ", next);
    }

    if (num > 2)
    {
        while (num > 2)
        {
            sum = prev + next;
            printf("%d ", sum);
            prev = next;
            next = sum;
            num--;
        }
    }
}

int main()
{
    int num;
    printf("Enter the length of Fibonacci series you want to view: \n");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}