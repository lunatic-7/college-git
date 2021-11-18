#include <stdio.h>

int main()
{
    int eng, hin, sci, code, music, total, avg;
    float per;

    printf("Enter the number of English: ");
    scanf("%d", &eng);
    printf("Enter the number of Hindi: ");
    scanf("%d", &hin);
    printf("Enter the number of Science: ");
    scanf("%d", &sci);
    printf("Enter the number of Code: ");
    scanf("%d", &code);
    printf("Enter the number of Music: ");
    scanf("%d", &music);

    total = eng + hin + sci + code + music;
    printf("\n");
    printf("The total of your number is: %d/500\n", total);
    avg = total/5;
    printf("The avg of your number is: %d/100\n", avg);
    per = ((float) total/500) * 100;
    printf("The percentage of your number is: %0.2f percent.\n", per);

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