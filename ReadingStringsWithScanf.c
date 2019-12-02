#include <stdio.h>

int main()
{
    char name[20];
    printf("Type your full name > ");
    scanf("%[^\n]s", name);
    puts(name);
}