#include <stdio.h>

void even(int a, int b)
{
    int count = 0;

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            count++;
            printf("i: %d\n", i);
        }
    }
    printf("Anzahl gerader Zahlen: %d", count);
}