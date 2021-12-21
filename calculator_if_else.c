#include <stdio.h>

void sum(int a, int b, int c)
{
    int sum;

    if (a == '+')
    {
        sum = b + c;
        printf("Your sum is: %d", sum);
    }
    else if (a == '-')
    {
        sum = b - c;
        printf("Your subtraction is: %d", sum);
    }
    else if (a == '*')
    {
        sum = b * c;
        printf("Your multiplication is: %d", sum);
    }
    else if (a == '/')
    {
        sum = b / c;
        printf("Your division is: %d", sum);
    }
} 

int main()
{
    char a;
    int b, c;
    printf("Enter: \n(+ for add) \n(- for sub) \n(* for muliply) \n(/ for division)\n\n");
    printf("Enter the value of a: ");
    scanf("%c", &a);

    printf("\n");
    
    printf("Enter first num: ");
    scanf("%d", &b);
    printf("Enter second num: ");
    scanf("%d", &c);
    
    sum(a, b, c);
    return 0;
}