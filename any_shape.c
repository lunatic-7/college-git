#include <stdio.h>

int main()
{
    int arr[7][7] = {
        {0,0,0,1,0,0,0},
        {0,0,1,1,1,0,0},
        {0,1,1,1,1,1,0},
        {1,1,1,1,1,1,1},
        {0,1,1,1,1,1,0},
        {0,0,1,1,1,0,0},
        {0,0,0,1,0,0,0}
    };

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (arr[i][j] == 0)
            {
                printf(" ");
            }
            else if (arr[i][j] == 1)
            {
                printf("*");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}