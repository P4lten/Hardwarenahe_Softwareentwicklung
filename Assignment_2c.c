#include <stdio.h>

int main()
{

    int zahl_1 = 22;
    int zahl_2 = 65;
    int zahl_3 = 62;

    printf("Zahl_1: %d\nZahl_2: %d\nZahl_3: %d\n", zahl_1, zahl_2, zahl_3);

    int min = zahl_1;
    int middle = zahl_2;
    int max = zahl_3;
    int helper = 0;

    if (min > middle)
    {
        helper = min;
        min = middle;
        middle = helper;
    }

    if (middle > max)
    {
        helper = middle;
        middle = max;
        max = helper;
    }

    if (min > middle)
    {
        helper = min;
        min = middle;
        middle = helper;
    }

    printf("Der mittlere Wert ist: %d\n", middle);

    int rest = middle % 3;

    switch (rest)
    {
    case 0:
        printf("Der Wert von Modulo ist: 0\n");
        break;
    case 1:
        printf("Der Wert von Modulo ist: 1\n");
        break;
    case 2:
        printf("Der Wert von Modulo ist: 2\n");
        break;

    default:
        printf("ERROR");
        break;
    }

    int middleHalf = middle >> 1;

    printf("Der mittlere Wert dividiert durch 2 ist: %d", middleHalf);

    return 0;
}
