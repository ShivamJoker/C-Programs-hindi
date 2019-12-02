#include <string.h>
#include <stdio.h>

int main()
{
    char name[] = "Shivam";
    // printf("Length of string %lu \n", strlen(name));

    char fName[20] = "Accha";
    char *lName = "Baccha";

    // fName[4] = 'i';
    // puts(fName);

    // lName[4] = 'i';
    // puts(lName);

    // strcpy(fName, lName);
    // puts(fName);

    strcat(fName, lName);
    puts(fName);

}