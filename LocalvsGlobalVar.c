#include <stdio.h>
char global = 'g';

int main()
{
    char local = 'l';
    global = 'h';

    for (size_t i = 0; i < 5; i++)
    {
        printf(" >> %lu", i);

        for (size_t i = 5; i < 10; i++)
        {
            printf(" [%lu] ", i);
        }
    }
}

// local = 's';