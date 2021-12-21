#include <stdio.h>
int main()
{
    char a;
    printf("Enter: \n(+ for add) \n(- for sub) \n(* for muliply) \n(/ for division)\n\n");
    printf("Enter the value of a: ");
    scanf("%c", &a);
    int b, c, sum;

    switch(a)
    {
    case '+':
        printf("Enter first num: ");
        scanf("%d", &b);
        printf("Enter second num: ");
        scanf("%d", &c);

        sum = b + c;

        printf("Your sum is: %d", sum);
        break;
    
    case '-':
        printf("Enter first num: ");
        scanf("%d", &b);
        printf("Enter second num: ");
        scanf("%d", &c);

        sum = b - c;

        printf("Your subtraction is: %d", sum);
        break;
    
    case '*':
        printf("Enter first num: ");
        scanf("%d", &b);
        printf("Enter second num: ");
        scanf("%d", &c);

        sum = b * c;

        printf("Your multiplication is: %d", sum);
        break;
    
    case '/':
        printf("Enter first num: ");
        scanf("%d", &b);
        printf("Enter second num: ");
        scanf("%d", &c);

        sum = b / c;

        printf("Your division is: %d", sum);
        break;
    
    default:
        break;
    }
    return 0;
}