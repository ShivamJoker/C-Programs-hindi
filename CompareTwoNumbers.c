#include <stdio.h>
int main()
{
    int a = 4;
    int b = 6;

    if (a > b)
        printf("%d is greater than %d", a, b);
    else if (a < b)
        printf("%d is smaller than %d", a, b);
    else
        printf("Both numbers are equal");
}