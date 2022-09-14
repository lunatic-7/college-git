#include <stdio.h>
#include <math.h>

int temp(int choice)
{
    if (choice == 1)
    {
        int num, shakti;
        float power;
        printf("Enter the number: ");
        scanf("%d", &num);
        printf("Enter the power: ");
        scanf("%d", &shakti);

        power = pow(num, shakti);
        
        printf("Your desired power is: %0.2f", power);
        
    }
    else if (choice == 2)
    {
        int num;
        float root;
        printf("Enter the number: ");
        scanf("%d", &num);
        root = sqrt(num);
        printf("Your square root is: %0.2f", root);
    }
    else
    {
        printf("Enter a {Valid Number}");
    }
    
}

int main()
{
    printf("Enter a number and we will find its power and square root...\n\n");
    int choice;
    printf("Enter 1: For Power.\n");
    printf("Enter 2: For Square root.\n");
    scanf("%d", &choice);

    temp(choice);
    return 0;
}