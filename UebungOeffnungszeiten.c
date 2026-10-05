#include <stdio.h>

int main()
{
    int tag = 6;

    if (tag > 0 && tag < 7)
    {
        printf("Offen\n");
    }
    else
    {
        printf("Geschlossen\n");
    }

    switch (tag)
    {
    case 1:
        printf("8h-19h\n");
        break;
    case 2:
        printf("8h-19h\n");
        break;
    case 3:
        printf("8h-19h\n");
        break;
    case 4:
        printf("8h-19h\n");
        break;
    case 5:
        printf("8h-19h\n");
        break;
    case 6:
        printf("8h-13h\n");
        break;
    default:
        printf("Keine gültige Eingabe\n");
        break;
    }
}