#include <stdio.h>
int main(){
    union test
    {
        char letter;
        int code;
    } letter1;
    
    letter1.code = 65;
    printf("%c\n", letter1.letter);
    letter1.letter = 'B';
    printf("%d\n", letter1.code);
    printf("%d\n", letter1.letter);


}