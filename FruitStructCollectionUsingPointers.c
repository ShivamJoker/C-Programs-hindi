#include <stdio.h>
#include <string.h>

struct fruits
{
    char name[20];
    float rate;
    int quantity;
};

void addFruit(struct fruits *fruit, char name[20], float rate, int quantity){
    strcpy(fruit->name, name);
    fruit->rate = rate;
    fruit->quantity = quantity;
}

void printFruit(struct fruits *fruit){
    printf("Name of fruit - %s\n", fruit->name);
    printf("Rate of fruit - %.2f\n", fruit->rate);
    printf("Quantity of fruit - %d\n", fruit->quantity);

}

int main()
{

    struct fruits fruit1, fruit2, fruit3;
    addFruit(&fruit1, "Apple", 100.20, 120);
    addFruit(&fruit2, "Banana", 10.20, 10);
    addFruit(&fruit3, "Guava", 1.20, 130);

    printFruit(&fruit1);
    printFruit(&fruit2);
    printFruit(&fruit3);

}