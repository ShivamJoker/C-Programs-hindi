#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;

    int num;
    char pattern[20];
    char tables[30];
    int isMatched = 0;
    int tableCount = 1;


    fp = fopen("tables.txt", "r");
    // open the file show error if it failed
    if (!fp)
    {
        printf("Can't create file");
    }
    else
    {

        printf("Please enter the number for which you want the table \n>>");
        scanf("%d", &num);
        // used for making pattern this will be ===5===
        snprintf(pattern, 20, "===%d===\n", num);

        while (fgets(tables, 30, fp) != NULL)
        {

            if (isMatched && tableCount <= 10)
            {
                printf("%s", tables);
                tableCount++;
            }
            if (!strcmp(tables, pattern))
            {
                isMatched = 1;
            }
        }

        fclose(fp);
    }
}