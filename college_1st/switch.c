#include <stdio.h>
int main()
{
    int a;
    int num;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch(a)
    {
    case 1:
        
        printf("Enter a number and we will tell if it's prime: ");
        scanf("%d", &num);

        if ((num % 2 != 0) && (num % 3 != 0) && (num % 5 != 0))
        {
            printf("Your number: %d is Prime.", num);
        }
        else
        {
            printf("Not prime!!!");
        }
        break;
    
    // case 2:
        
    //     printf("Enter a number and we will tell if it's prime: ");
    //     scanf("%d", &num);

    //     if ((num % 2 != 0) && (num % 3 != 0) && (num % 5 != 0))
    //     {
    //         printf("Your number: %d is Prime.", num);
    //     }
    //     else
    //     {
    //         printf("Not prime!!!");
    //     }
    //     break;
    
    default:
        break;
    }
    return 0;
}