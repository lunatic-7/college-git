#include <stdio.h>
 
int main()
{
    float cel, fah;
    int lower = 0;
    int upper = 200;
    int step = 20;

    fah = lower;
    printf("Fahrenheit\t Celcius\n");
    while(fah <= upper)
    {
        cel = 5.0/9.0 * (fah - 32);
        printf("%6.0f %15.1f\n", fah, cel);
        fah = fah + step;
    }
    return 0;
}