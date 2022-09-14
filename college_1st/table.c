#include <stdio.h>
int main()
{
    int a = 11;
    int b =2, c=4, d=5, e=9;

    printf("The table of 2, 4, 5, 9 is:\n\n");
    for(size_t i=1; i < a; i++)
    {
       

        printf("%d\t %d\t %d\t %d\t\n", b*i, c*i, d*i, e*i);

    }
    return 0;
}