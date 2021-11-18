#include <stdio.h>

int main()
{
    int days;
    printf("Days in Years and Weeks Convertor...\n\n");

    // printf("%f", 365/365); // To ask!

    printf("Enter the number of days: ");
    scanf("%d", &days);

    printf("Your days in years is: %d years\n", days/365);
    printf("Your days in weeks is: %d weeks\n", days/7);
    printf("Your days in hours is: %d hours\n", days * 24);
    printf("Your days in minutes is: %d minutes\n", days * 24 * 60);
    printf("Your days in minutes is: %d seconds\n", days * 24 * 60 * 60);
    return 0;
}