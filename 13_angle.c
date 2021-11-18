#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 2 angles of a Triangle...\n\n");
    printf("Angle A: ");
    scanf("%d", &a);
    printf("Angle B: ");
    scanf("%d", &b);

    c = 180 - (a + b);
    printf("The third angle of this Triangle is: %d", c);
    return 0;
}