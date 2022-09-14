#include <stdio.h>

int main()
{
    int eng, hin, sci, total, avg;

    printf("Enter the number of English: ");
    scanf("%d", &eng);
    printf("Enter the number of Hindi: ");
    scanf("%d", &hin);
    printf("Enter the number of Science: ");
    scanf("%d", &sci);

    total = eng + hin + sci;
    printf("\n");
    printf("The total of your number is: %d/300\n", total);
    avg = total/3;
    printf("The avg of your number is: %d/100\n", avg);

    if (avg < 0 || avg > 100)
    {
        printf("Please, Enter a valid entity!");
    }
    else if (avg >= 80)
    {
        printf("Congratulations! You are in merit list.");
    }
    else if (avg >= 60)
    {
        printf("Congratulations! You got 1st division.");
    }
    else if (avg >= 40)
    {
        printf("Congratulations! You got 2nd division.");
    }
    else if (avg < 40)
    {
        printf("Sorry! You failed.");
    }
    
    return 0;
}