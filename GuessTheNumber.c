#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int randomNum;
int userInput;

// generate random number b/w 1-10
void generateRandomNum()
{
    srand(time(NULL));
    randomNum = 1 + rand() % 10;
}

void welcomeMsg()
{
    printf("Welcome to number 🙈  guessing game \n");
    printf("Please enter no. between 1-10\n>>");
    generateRandomNum();
    scanf("%d", &userInput);
}

int main()
{
    _Bool isGameOver = false;
    welcomeMsg();
    // keep looping to check the number
    while (!isGameOver)
    {
        if (userInput > randomNum)
        {
            printf("Your number is greater, try something 🤧  smaller \n>>");
            scanf("%d", &userInput);
        }
        else if (userInput < randomNum)
        {
            printf("Your number is smaller, try something 🤓  bigger \n>>");
            scanf("%d", &userInput);
        }
        else if (userInput == randomNum)
        {
            printf("You guessed it correct 🎉\nWould you like to play again ?\n");
            printf("Type 'Y' to play or just hit enter to exit \n>>");


            char userChoice;
            getchar();
            userChoice = getchar();
            if (userChoice == 'y' || userChoice == 'Y')
            {
                welcomeMsg();
            }
            else
            {
                printf("Bye Bye! 👋  \n ");
                isGameOver = true;
            }
        }
    }
}