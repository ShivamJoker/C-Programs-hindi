#include <stdio.h>
int main()
{
    // 2019 - 2002 = 17
    int currentYear = 2019;
    int birthYear, age;

    printf("Please type your birth year > ");
    scanf("%d", &birthYear);
    age = currentYear - birthYear;
    printf("You are %d years old", age);
}