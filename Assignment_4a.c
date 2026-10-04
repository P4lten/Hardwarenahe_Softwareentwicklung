#include <stdio.h>

double circleArea(double radius);
double circumference(double radius);
const double pi = 3.141592653589793;

int main()
{
    double radius[] = {1.00, 2.50, 10.00};

    for (int i = 0; i < 3; i++)
    {
        printf("Radius: %.2f, Umfang: %.2f, Flaeche: %.2f\n", radius[i], circumference(radius[i]), circleArea(radius[i]));
    }
}

double circleArea(double radius)
{
    return pi * (radius * radius);
}

double circumference(double radius)
{
    return 2 * pi * radius;
}
