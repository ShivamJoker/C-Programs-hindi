#include <stdio.h>
#define currentYear
#if !(defined(currentYear) && currrentYear + 0)
#error Please type the current year in source code
#endif

int main()
{
    // 2019 - 2002 = 17

    int birthYear, age;

    printf("Please type your birth year > ");
    scanf("%d", &birthYear);
    age = currentYear - birthYear;
    printf("You are %d years old", age);
}