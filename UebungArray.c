#include <stdio.h>
#define ARRAYLENGTH 15

int main()

{
    int numbers[ARRAYLENGTH];
    for (int i = 0; i < ARRAYLENGTH; i++)
    {
        numbers[i] = i + 1;
    }

    int i = 0;
    do
    {
        if (numbers[i] % 2 == 1)
        {
            printf("%d\n", numbers[i]);
        }
        i++;
    } while (i < ARRAYLENGTH);
}