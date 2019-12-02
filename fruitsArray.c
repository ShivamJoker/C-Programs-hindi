#include <stdio.h>
int main()
{
    char *fruits[] = {"Apple", "Mango", "Banana", "Lichy"};
    fruits[3] = "Grapes";
    for (size_t i = 0; i < 4; i++)
    {
        printf("%s, ", fruits[i]);
    }

}