#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));                  // is needed so that the number is different each time the programm starts
    int secretNumber = rand() % 99 + 1; // modulo operator for secretNumber to be in between 0 and 98 + 1
    int inputNumber;
    int trys = 5;

    // printf("secretNumber: %d\n", secretNumber); used for testing

    for (int i = 0; i < trys; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &inputNumber);
        if (inputNumber == secretNumber)
        {
            printf("You guessed the number!!!\nCONGRATULATIONS\n ");
            break;
        }
        else if (inputNumber < secretNumber)
        {
            printf("Number is to small\n");
        }
        else if (inputNumber > secretNumber)
        {
            printf("Number is to big\n");
        }
    }

    if (inputNumber != secretNumber)
    {
        printf("The secret number was %d\n", secretNumber);
    }

    return 0;
}