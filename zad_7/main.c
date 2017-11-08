#include <stdio.h>

int funkcja(unsigned int n, unsigned int m)
{
    if(m!=0)
    {
        int i;
        for(i=1; i<n; i++)
        {
            if(i%m == 0) printf("%d\n", i);
        }
    }
}

/*
int main()
{
    funkcja(9, 3);
    return 0;
}
*/