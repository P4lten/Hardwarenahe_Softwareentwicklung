#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int num = 15;
    printf("num equals: %d\n", num);

    int *pNum;
    pNum = &num;

    /* now, alter num through pNum */
    *pNum = 25;
    /* prove that num has changed */
    printf("num equals: %d\n", num);

    /* alter num directly again */
    num = 42;

    /* read num via pNum */
    printf("num equals: %d\n", *pNum);

    int newInt;

    pNum = &newInt;

    printf("newInt -> *pNum: %d\n", *pNum);

    newInt = 10;

    printf("newInt -> *pNum: %d\n", *pNum);

    pNum = NULL;

    printf("newInt -> *pNum: %d\n", *pNum);

    return 0;
}