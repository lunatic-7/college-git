#include <stdio.h>

void chek(char chk)
{

    chk == 'a' || chk == 'A' || chk == 'e' || chk == 'E' || chk == 'i' || chk == 'I' || chk == 'o' || chk == 'O' || chk == 'u' || chk == 'U' ? printf("This is Vowel") : printf("This is consonent.");
}

int main()
{
    char chk;

    printf("Enter your alphabet: \n");

    scanf("%c", &chk);
    chek(chk);

    return 0;
}