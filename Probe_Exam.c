#include <stdio.h>

int main(void)
{
    int foo = -1;
    do
    {
        int i = foo++;
        printf("i: %d\n", i);

        if (foo > 8)
            break;
        else if (foo < 5)
            continue;

        int start = 2;
        if (i)
            start = foo;

        for (int j = start; j < 10; j++)
        {
            printf("foo =%d, i =%d, j = %d;\n", foo, i, j);
        }
        i = foo++;
    } while (1);
    return foo;
}