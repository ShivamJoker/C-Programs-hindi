#include <stdio.h>
#include <string.h>

char myStr[40];

void convertToLower()
{
    for (size_t i = 0; i != '\n'; i++)
    {
        if (myStr[i] >= 65 && myStr[i] <= 90)
        {
            myStr[i] = myStr[i] + 32;
        }
    }
}

int main()
{

    scanf("%[^\n]s", myStr);
    convertToLower();
    puts(myStr);

    // char str[20] = "Hello";
    // str[0] = str[0] + 32;
    // str[1] = str[1] - 32;
    // puts(str);
}
