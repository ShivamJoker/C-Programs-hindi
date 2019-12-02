#include <stdio.h>
int main(){
    int num = 3;

    switch (num)
    {
    case 1:
        printf("It's one");
        break;
    case 2:
        printf("It's two");
        break;
    case 3:
        printf("It's three");
        break;
    case 4:
        printf("It's four");
        break;
    case 5:
        printf("It's five");
        break;
    
    default:
        printf("Out of reach");
        break;
    }
}