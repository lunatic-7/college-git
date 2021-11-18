#include <stdio.h>
int main()
{
    int radius, di;
    float circ, area;

    printf("Enter the Radius of circle: ");
    scanf("%d", &radius);

    di = 2 * radius;
    circ = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("The diameter of your circle is: %d\n", di);
    printf("The circumference of your circle is: %0.2f\n", circ);
    printf("The area of your circle is: %0.2f\n", area);
    return 0;
}