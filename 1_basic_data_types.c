#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;

    printf("Enter the value of char b: ");
    scanf("%c", &b);
   

    printf("Enter the value of int a: ");
    scanf("%d", &a);
    
    
    printf("Enter the value of float c: ");
    scanf("%f", &c);

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %c\n", b);
    printf("The value of c is: %f\n", c);

    return 0;
}