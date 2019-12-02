#include <stdio.h>
char myStr[30];

void convertToLower()
{
    for (size_t i = 0; myStr[i] != '\0'; i++)
    {
        if (myStr[i] >= 65 && myStr[i] <= 90)
        {
            myStr[i] = myStr[i] + 32;
        }
    }
}

void convertToUpper()
{
    for (size_t i = 0; myStr[i] != '\0'; i++)
    {
        if (myStr[i] >= 97 && myStr[i] <= 122)
        {
            myStr[i] = myStr[i] - 32;
        }
    }
}

int main()
{
    printf("Type your string \n");
    scanf("%[^\n]s", myStr);

    getchar();
    printf("Type L for lower and U for upper > ");
    char option;
    option = getchar();

    switch (option)
    {
    case 'L':
        convertToLower();
        break;
    case 'U':
        convertToUpper();
        break;

    default:
        printf("Please choose correct option \n");
        break;
    }

    // convertToLower();
    // convertToUpper();
    puts(myStr);

    // char one = 'a';
    // printf("%c\n", one - 32);
}