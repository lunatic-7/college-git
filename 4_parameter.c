#include <stdio.h>
int main()
{
    int l, b, parameter;

    printf("Enter the length of rectangle: ");
    scanf("%d", &l);
    printf("Enter the bredth of rectangle: ");
    scanf("%d", &b);

    parameter = 2 * (l + b);

    printf("The parameter of rectangle is: %d", parameter);
    return 0;
}