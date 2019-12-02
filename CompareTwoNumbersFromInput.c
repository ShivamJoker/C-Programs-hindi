#include <stdio.h>
int main()
{
    int a,b;
    printf("Please enter the two number to compare\n");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is greater than %d", a, b);
    else if (a < b)
        printf("%d is smaller than %d", a, b);
    else
        printf("Both numbers are equal");
}