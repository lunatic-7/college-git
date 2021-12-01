#include <stdio.h>
#include <math.h>

int main()
{
    int num, w, x, y, z;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    w = num%10; // 3
    x = num/10; // 15
    y = x/10; // 1
    z = x%10; // 5

    if ((pow(y, 3) + pow(z, 3) + pow(w, 3)) == num)
    {
        printf("Your number is Amstrong.\n");
    }
    else
    {
        printf("Your number in not amstrong.\n");
    }
    
    return 0;
}