#include <stdio.h>
#include <math.h>

int main()
{
    int a; 
    float area;
    printf("Enter the Side of your triangle: ");
    scanf("%d", &a);

    area = sqrt(3)/4 * pow(a, 2);

    printf("The Area of your triangle is: %f", area);
    return 0;
}