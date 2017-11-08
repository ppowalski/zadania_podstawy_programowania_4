#include <stdio.h>

double funkcja(double x1, double y1, double x2, double y2)
{
    return ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
}

// znak 251 to pierwiastek w ascii

int main()
{
    printf("%c %f", (char)251, funkcja(-2.0, 3.0, 4.0, 6.0));
    return 0;
}