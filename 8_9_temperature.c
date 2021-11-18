#include <stdio.h>

int temp(int choice)
{
    if (choice == 1)
    {
        int c;
        float fah;
        printf("Enter the temperature in Celcius: ");
        scanf("%d", &c);
        fah = (c * 1.8) + 32;
        printf("Your temperature in Fahrenheit is: %0.2f F", fah);
        
    }
    else if (choice == 2)
    {
        int f;
        float cel;
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%d", &f);
        cel = (f - 32) * 0.5556;
        printf("Your temperature in Celcius is: %0.2f C", cel);
    }
    else
    {
        printf("Enter a {Valid Number}");
    }

}

int main()
{
    int choice;
    printf("We will convert Temperatue in Celcius (C) to Fahrenheit (F) and vice versa...\n\n");
    printf("Enter 1: For Celcius to Fahrenheit.\n");
    printf("Enter 2: For Fahrenheit to Celcius.\n");
    scanf("%d", &choice);

    temp(choice);

    return 0;
}