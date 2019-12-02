#include <stdio.h>
int main()
{
    int num;
    FILE *fp;
    fp = fopen("tables.txt", "a+");
    if (!fp)
    {
        printf("Can't create file");
    }
    else
    {

        printf("Please enter the number for which you want the table \n>>");
        scanf("%d", &num);

        fprintf(fp, "===%d===\n", num);
        for (int i = 1; i <= 10; i++)
        {
            fprintf(fp, "%d x %d = %d \n", num, i, num * i);
        }
        printf("Table writing completed\n");
        fclose(fp);
    }
}
