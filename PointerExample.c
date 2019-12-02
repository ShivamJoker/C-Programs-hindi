#include <stdio.h>

void changeValue(int * ptr){
    *ptr = 60;
}

int main()
{
    int value = 12;
    changeValue(&value);
    printf("%d\n", value);

}