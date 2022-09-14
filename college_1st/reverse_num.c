#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int n = 765;
    int x;
    int y;
    int z;
    int e;
    int f;

    printf("The value of a, b, c, d is: %d, %d, %d, %d\n", a, b, c, d);

    int temp = a;
    int temp2 = b;
    b = c;
    a = d;
    d = temp;
    c = temp2; 

    printf("The value of a, b, c, d is: %d, %d, %d, %d\n", a, b, c, d);

    x = n%10;
    printf("%d\n", x);
    y = n/10;
    printf("%d\n", y);
    z = y/10;
    printf("%d\n", z);
    e = y%10;
    printf("%d\n", e);

    
    f = x * 100 + e * 10 + z;
    printf("result: %d\n", f);

    return 0;
}