#include <stdio.h>

int main()
{

    int zahl_1 = 11;
    int zahl_2 = 47;
    int zahl_3 = 62;

    printf("Zahl_1: %d\nZahl_2: %d\nZahl_3: %d\n", zahl_1, zahl_2, zahl_3);

    int max = 0;

    if (zahl_1 > max)
    {
        max = zahl_1;
    }
    if (zahl_2 > max)
    {
        max = zahl_2;
    }
    if (zahl_3 > max)
    {
        max = zahl_3;
    }

    printf("Das Maximum ist: %d\n", max);

    int rest = max % 3;

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

    int maxDouble = max << 1;

    printf("Das Maximum mit 2 multipizier ist: %d", maxDouble);

    return 0;
}