#include <stdio.h>

int evenStar_oddHash(int size)
{
    int num[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter your index number [%d]: ", i);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("* ");
        }

        else
        {
            printf("# ");
        }
    }
}


int main()
{
    int size;

    printf("Enter you numbers to change even no. to * and odd to #\n\n");
    printf("Enter size of your input: ");
    scanf("%d", &size);
    
    // Initializing the function
    evenStar_oddHash(size);

    return 0;
}