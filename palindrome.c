#include <stdio.h>

int isPalindrome(int number)
{
    int reversed = 0;
    int original_number = number;

    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number = number / 10;
    }

    printf("The reversed number is: %d\n", reversed);
    
    if (original_number == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;

    printf("Enter a number to check whether it is Palindrome or not: ");
    scanf("%d", &number);

    if (isPalindrome(number))
    {
        printf("Your number is a Palindrome.");
    }
    else
    {
        printf("Your number is not a palindrome!");
    }
    
    return 0;
}