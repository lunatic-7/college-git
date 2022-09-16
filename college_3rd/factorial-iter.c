#include <stdio.h>

void factorial(int num) {
    int fact = 1;
    int size = num - 1;

    if (num > 1) {
        for (int i = 0; i < size; i++)
        {
            fact = fact * num;
            num--;        
        }
    }
    printf("%d", fact);
}

int main()
{
    int num;
    printf("Enter a number to find the factorial of: \n");
    scanf("%d", & num);

    factorial(num);
    return 0;
}