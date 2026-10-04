#include <stdio.h>

int main(){

int a = 1;
int b = 2; 
int c = 3;
int d = 4; 
int e = 6;
    
int sum = a+b+c+d+e;

float average = sum / 5.;

printf("Summe: %d\nDurchschnitt: %.2f\n", sum, average);

return 0;
}