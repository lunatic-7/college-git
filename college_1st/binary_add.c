#include <stdio.h>

int read(int a[],int size1)
{
    for(int i=0; i < size1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int num1(int a[], int size1, int element1)
{
    for(int i=0; i < size1; i++)
    {
        if (a[i] == element1)
        {
            return element1;
        }
    }
}
int num2(int b[], int size2, int element2)
{
    for(int i=0; i < size2; i++)
    {
        if (b[i] == element2)
        {
            return element2;
        }
    }
}

int main()
{
    int a[] = {12,34,5,3,543,5,111,8};
    int b[] = {17,4,5,101,53,5,133,7};

    int size1 = sizeof(a)/sizeof(int);
    int size2 = sizeof(b)/sizeof(int);

    read(a, size1);
    read(b, size2);

    int element1 = 111;
    int element2 = 101;

    int n1 = num1(a, size1, element1);
    int n2 = num2(b, size2, element2);

    int i = 0, remainder = 0, sum[20];

    while (n1 != 0 || n2 != 0)
    {
        sum[i++] =(n1 % 10 + n2 % 10 + remainder) % 2;
        remainder =(n1 % 10 + n2 % 10 + remainder) / 2;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
    {
        printf("%d", sum[i--]);
    }
    return 0;
}