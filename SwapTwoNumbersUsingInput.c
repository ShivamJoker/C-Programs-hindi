#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = a; // c = 20
    a = b; // a = 50
    b = c; // b = 20
    printf("%d %d", a, b);
}