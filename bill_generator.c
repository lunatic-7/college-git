#include <stdio.h>

int bill(int kw, int unit)
{
    if (kw < 0)
    {
        printf("Please, Enter a valid Kilowatt!");
    }
    else if (kw > 25)
    {
        if (unit < 0)
        {
            printf("Please, Enter a valid unit!");
        }
        if (unit > 1200)
        {
            printf("Your bill is: %drs", 250+unit*8);
        }
        else if (unit > 801)
        {
            printf("Your bill is: %drs", 250+unit*7);
        }
        else if (unit > 401)
        {
            printf("Your bill is: %0.2frs", 250+unit*6.5);
        }
        else if (unit > 201)
        {
            printf("Your bill is: %0.2frs", 250+unit*4.5);
        }
        else if (unit > 0)
        {
            printf("Your bill is: %drs", 250+unit*3);
        }
    }
    else if (kw > 15)
    {
        if (unit < 0)
        {
            printf("Please, Enter a valid unit!");
        }
        if (unit > 1200)
        {
            printf("Your bill is: %drs", 200+unit*8);
        }
        else if (unit > 801)
        {
            printf("Your bill is: %drs", 200+unit*7);
        }
        else if (unit > 401)
        {
            printf("Your bill is: %0.2frs", 200+unit*6.5);
        }
        else if (unit > 201)
        {
            printf("Your bill is: %0.2frs", 200+unit*4.5);
        }
        else if (unit > 0)
        {
            printf("Your bill is: %drs", 200+unit*3);
        }
    }
    else if (kw > 5)
    {
        if (unit < 0)
        {
            printf("Please, Enter a valid unit!");
        }
        if (unit > 1200)
        {
            printf("Your bill is: %drs", 100+unit*8);
        }
        else if (unit > 801)
        {
            printf("Your bill is: %drs", 100+unit*7);
        }
        else if (unit > 401)
        {
            printf("Your bill is: %0.2frs", 100+unit*6.5);
        }
        else if (unit > 201)
        {
            printf("Your bill is: %0.2frs", 100+unit*4.5);
        }
        else if (unit > 0)
        {
            printf("Your bill is: %drs", 100+unit*3);
        }
    }
    else if (kw > 2)
    {
        if (unit < 0)
        {
            printf("Please, Enter a valid unit!");
        }
        if (unit > 1200)
        {
            printf("Your bill is: %drs", 50+unit*8);
        }
        else if (unit > 801)
        {
            printf("Your bill is: %drs", 50+unit*7);
        }
        else if (unit > 401)
        {
            printf("Your bill is: %frs", 50+unit*6.5);
        }
        else if (unit > 201)
        {
            printf("Your bill is: %frs", 50+unit*4.5);
        }
        else if (unit > 0)
        {
            printf("Your bill is: %drs", 50+unit*3);
        }
    }
    else if (kw > 0)
    {
        if (unit < 0)
        {
            printf("Please, Enter a valid unit!");
        }
        if (unit > 1200)
        {
            printf("Your bill is: %drs", 20+unit*8);
        }
        else if (unit > 801)
        {
            printf("Your bill is: %drs", 20+unit*7);
        }
        else if (unit > 401)
        {
            printf("Your bill is: %frs", 20+unit*6.5);
        }
        else if (unit > 201)
        {
            printf("Your bill is: %drs", 20+unit*4.5);
        }
        else if (unit > 0)
        {
            printf("Your bill is: %drs", 20+unit*3);
        }
    }
}

int main()
{
    int kw, unit;

    printf("********Electiricity bill Generator *******\n\n");

    printf("Enter KiloWatts (KW) you consume: ");
    scanf("%d", &kw);
    
    printf("Enter Units (unit) you consumed: ");
    scanf("%d", &unit);

    bill(kw, unit);

    return 0;
}