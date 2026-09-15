#include <stdio.h>

int main()
{

    int zahl_1 = 47;
    int zahl_2 = 92;
    int zahl_3 = 62;

    printf("Zahl_1: %d\nZahl_2: %d\nZahl_3: %d\n", zahl_1, zahl_2, zahl_3);

    int min = zahl_1;

    if (zahl_2 < min)
    {
        min = zahl_2;
    }
    if (zahl_3 < min)
    {
        min = zahl_3;
    }

    printf("Das Minimum ist: %d\n", min);

    int rest = min % 3;

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

    int minHalf = min >> 1;

    printf("Das Minimum dividiert durch 2 ist: %d", minHalf);

    return 0;
}