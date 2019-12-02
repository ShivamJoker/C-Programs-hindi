#include <stdio.h>

float getDiscontedPrice(float totalPrice, float discountPercent){
    float percentageOf = discountPercent/100*totalPrice;
    return totalPrice - percentageOf;
}

int main(){

    printf("Your discounted price is Rs %.2f", getDiscontedPrice(145601, 21));
}

