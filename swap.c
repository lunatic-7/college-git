#include <stdio.h>
int main()
{
    int a = 2;
    int b = 3;

    printf("The value of a and b is: %d, %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("The value of a and b is: %d, %d", a, b);
    return 0;
}