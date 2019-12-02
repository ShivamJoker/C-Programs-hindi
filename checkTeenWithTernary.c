#include <stdio.h>
int main()
{
    int age;
    printf("Tell me your age > ");
    scanf("%d", &age);
    // if (age > 12 && age < 20)
    // {
    //     printf("You are a teenage\n");
    // }
    // else
    // {
    //     printf("You are not a teenage\n");
    // }

    (age > 12 && age < 20) ? printf("You're a teen") : printf("Your'nt a teen");
}