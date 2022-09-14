#include <stdio.h>
#include <math.h>

int main()
{
    float p, t, n, r, si, ci;
    printf("Enter the value of Principal (p): ");
    scanf("%f", &p);
    printf("Enter the value of Rate (r): ");
    scanf("%f", &r);
    printf("Enter the value of Time (t): ");
    scanf("%f", &t);

    si = p * r * t/100;

    ci = p * pow(1 + r/100, t) - p;
    printf("The Simple Interest is: %0.2f rs\n", si);
    printf("The Compound Interest is: %0.2f rs", ci);
    return 0;
}