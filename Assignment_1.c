#include <stdio.h>

int main(){

    char name [] ="Peter Altenberger";
    int matrikelNumber  = 01520162;
    char group = 'B';

    printf("%s\n%#o\n%c\n", name, matrikelNumber, group);

    printf("%s,\n%05d,\n%c\n", "Maria Mustermann", 1234, 'A');

    return 0;
}