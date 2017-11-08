#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Podaj dlugosci bokow a, b i c:");
    scanf("%d %d %d",&a, &b, &c);
    if((c*c) == (a*a)+(b*b)) printf("T\n");
    else printf("N\n");
    return 0;
}