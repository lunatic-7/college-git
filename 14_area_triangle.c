#include <stdio.h>

int main()
{
    int h, b; 
    float area;
    printf("Enter the Height of triangle: ");
    scanf("%d", &h);
    printf("Enter the Base of triangle: ");
    scanf("%d", &b);

    area = 0.5 * b * h;

    printf("The Area of your triangle is: %0.2f", area);
    return 0;
}