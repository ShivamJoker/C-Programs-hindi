#include <stdio.h>
int main(){
    int arr[20];
    printf("Size of array = %lu", sizeof(arr)/sizeof(arr[0]));
}