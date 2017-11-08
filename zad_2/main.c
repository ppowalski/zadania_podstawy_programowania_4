#include <stdio.h>

int funkcja(unsigned int x, unsigned int y)
{
    if(y == 0) return x;
    else if(x == 0) return y;
    else return funkcja(x-1,y) + funkcja(x,y-1);
}

/*
int main()
{   
    printf("%d\n", funkcja(2, 4));
    return 0;
}
*/