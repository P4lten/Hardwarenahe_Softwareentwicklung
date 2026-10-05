#include <stdio.h>

void nr1();
int nr2();
int nr6();
void nr8();
void nr9();
void nr13();
int moodleSampleExamNr1();
void moodleSampleExamNr4();

int main()
{
    printf("START Nr1!!!\n");
    nr1();
    printf("\nSTART Nr2!!!\n");
    printf("rueckgabe von nr2() fuer aufgabe nr3 = %d\n", nr2());
    printf("Nr2 ENDE!!!\n");
    printf("\nSTART Nr6!!!\n");
    printf("\nrueckgabe von nr6() fuer aufgabe nr7 = %d\n", nr6());
    printf("Nr6 ENDE!!!\n");
    printf("\nSTART Nr8!!!\n");
    nr8();
    printf("\nSTART Nr9!!!\n");
    nr9();
    printf("\nSTART Nr13!!!\n");
    nr13();
    printf("\nSTART moodleSampleExamNr1!!!\n");
    moodleSampleExamNr1();
    printf("\nrueckgabe von moodleSampleExamNr1() fuer aufgabe nr2 im moodle exam = %d\n", moodleSampleExamNr1());
    printf("moodleSampleExamNr1() ENDE!!!\n");
    printf("\nSTART moodleSampleExamNr4!!!\n");
    moodleSampleExamNr4();
    printf("\nmoodleSampleExamNr4() ENDE!!!\n");
}

void nr1()
{
    int n = 72;
    n = n << 3;
    int bits[32];
    int i = 0;

    while (n)
    {
        bits[i] = n & 1;
        n >>= 1;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", bits[i]);
    }

    printf("\n");
    printf("Nr1 ENDE!!!\n");
}

int nr2()
{
    int foo = 0;
    do
    {
        int i = foo;
        for (int j = foo; j < 10; j++)
        {
            if (foo <= 5)
            {
                break;
            }
            if (j >= 7)
            {
                continue;
            }
            printf("foo=%d, i=%d, j=%d;\n", foo, i, j);
        }
        if (foo > 97)
            break;
        i = foo++;
    } while (1);
    return foo;
}

int nr6()
{
    int foo = 34;
    foo % 2;
    if (foo == 0)
    {
        printf("foo ist fast schon gueltig");
    }
    else if (foo < 0)
    {
        printf("foo ist ungueltig");
    }
    else
    {
        switch (foo %= 5)
        {
        case 1:
        case 2:
        case 3:
            printf("foo ist gueltig (%d)", foo);
        case 4:
            printf("foo ist gruen (%d)", foo);
            break;
        default:
            printf("foo ist rot (%d)", foo);
            break;
            printf("foo ist blau (%d)", foo);
        }
        printf(" muuuh");
    }
    if (foo)
        printf("maaah");
    return foo;
}

void nr8()
{

    unsigned int i;

    for (i = 8; i < 40; ++i)
    {
        // printf("i = %d\n", i);
    }
    printf("Letztes i = %d\n", i);
    printf("Nr8 ENDE!!!\n");
}

void nr9()
{
    int numbers[91];
    for (int i = 1; i < 91; i++)
    {
        int array_value = 0;
        numbers[i] = array_value;
        array_value += 1;
    }

    printf("%d\n", numbers[0]);
    printf("numbers[0] ist nicht definiert da wir mit der befuellung erst bei numbers[1] anfangen\nDaher ist die antwort g Keine dieser Antworten ist korrekt\n");
    printf("Nr9 ENDE!!!\n");
}

void nr13()
{
    int i = 6;
    while (i < 12)
    {
        printf("%d ", i++);
    }
    printf("\nNr13 ENDE!!!\n");
}

int moodleSampleExamNr1()
{
    int foo = -1;
    do
    {
        int i = foo++;
        if (foo > 8)
            break;
        else if (foo < 5)
            continue;
        int start = 2;
        if (i)
            start = foo;
        for (int j = start; j < 10; j++)
        {
            printf(" foo =% d , i =% d , j =% d ; ", foo, i, j);
        }
        i = foo++;
    } while (1);
    return foo;
}

void moodleSampleExamNr4()
{
    char arr[] = "0123456789";
    unsigned int i = 0;
    while (arr[i] != '\0')
    {
        switch (i % 3 != 0)
        {
        case 0:
            printf("%c", arr[++i]);
            break;
        case 1:
        default:
            i += 1;
            break;
        }
    }
}