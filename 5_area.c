#include <stdio.h>
int main()
{
    int l, b, area;

    printf("Enter the length of rectangle: ");
    scanf("%d", &l);
    printf("Enter the bredth of rectangle: ");
    scanf("%d", &b);

    area = l * b;

    printf("The area of rectangle is: %d", area);
    return 0;
}