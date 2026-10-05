#include <stdio.h>

int main(){

    puts("Diese Binaerzahl 0100000110111101 als");
    printf("Integer: %d\n", 0b0100000110111101);
    printf("Hexadecimal: %x\n", 0b0100000110111101);
    printf("Octal: %o\n", 0b0100000110111101);

    printf("Ans1: %d\n", (2<<1));
    printf("Ans2: %d\n", (2>>1));
    printf("Ans3: %d\n", ~(2<<1));
    printf("Ans4: %d\n", (3&1));

    return 0;
}