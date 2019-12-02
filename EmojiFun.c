#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char *emojis[5] = {u8"😀", u8"😂", u8"😎", u8"😭", u8"🥰"}; 
    srand(time(NULL));
    int randomInt = rand() % 5;
    
    printf("Your mood is %s\n", emojis[randomInt]);
}