#include <stdio.h>
int main(){
    int num;
    printf("Please enter the number for which you want the table \n");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", num, i, num*i);
    }
    
}