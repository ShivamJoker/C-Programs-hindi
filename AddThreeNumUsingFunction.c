#include <stdio.h>
int AddThreeNum(int x, int y, int z);

int main(){

    int sum1 = AddThreeNum(1,2,3);
    int sum2 = AddThreeNum(1,5,3);
    printf("Value of sum = %d", AddThreeNum(2,5,3));

}

int AddThreeNum(int x, int y, int z){
    int sum = x + y + z;
    return sum;
}