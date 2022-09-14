#include <stdio.h>
int main()
{
    float a, met, km;
    printf("Enter the value in length in cm: ");
    scanf("%f", &a);

    met = 0.01 * a;
    km = 0.00001 * a;

    printf("The value in meters is: %f\n", met);
    printf("The value in Kilometers is: %f\n", km);

    return 0;
}