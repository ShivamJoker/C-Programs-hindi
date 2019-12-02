#include <stdio.h>
#include <string.h>

int main()
{
    int myArray[6] = {1, 2, 3, 4, 5, 6};
    int location = 3;
    int length = 6;
    memmove(myArray + location, myArray + location + 1, (length - location - 1) * sizeof(myArray[0]));
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d\n", myArray[i]);
    }
}