#include <stdio.h>
#include <stdbool.h>

int add(int number1, int number2);
int subtract(int number1, int number2);
int multiply(int number1, int number2);
int divide(int number1, int number2);
int modulo(int number1, int number2);

int main()
{
    int value1 = 10;
    int value2 = 5;
    bool run = true;

    while (run)
    {
        puts("Bitte geben Sie einen char ein:");
        char c = getchar();
        getchar();
        switch (c)
        {
        case 'a':
            printf("Addieren: %d\n", add(value1, value2));
            break;
        case 's':
            printf("Subtrahieren: %d\n", subtract(value1, value2));
            break;
        case 'm':
            printf("Multiplizieren: %d\n", multiply(value1, value2));
            break;
        case 'd':
            if (value2 != 0)
            {
                printf("Dividieren: %d\n", divide(value1, value2));
            }
            else
            {
                printf("Fehler: Division durch 0 ist nicht erlaubt!\n");
            }
            break;
        case 'r':
            if (value2 != 0)
            {
                printf("Modulo: %d\n", modulo(value1, value2));
            }
            else
            {
                printf("Fehler: Modulo durch 0 ist nicht erlaubt!\n");
            }
            break;
        case 'e':
            printf("Ende!");
            run = false;
            break;
        default:
            printf("Bitte einen der folgenden Werte eingeben:\na (Addition)\ns (Subtraktion)\nm (Multiplikation)\nd (Division)\nr (Modulo) ");
            break;
        }
    }
}

int add(int number1, int number2)
{
    return number1 + number2;
}

int subtract(int number1, int number2)
{
    return number1 - number2;
}

int multiply(int number1, int number2)
{
    return number1 * number2;
}

int divide(int number1, int number2)
{
    return number1 / number2;
}

int modulo(int number1, int number2)
{
    return number1 % number2;
}