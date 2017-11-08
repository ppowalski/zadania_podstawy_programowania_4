#include <stdio.h>

int nie_pierwsza(int arg1)
{
    int i;
    for(i=2; i<arg1; i++)
    {
        if(arg1 == 2) return 0;
        else if(arg1%i == 0) return 1;   
    }
}

int najmniejszaPierwsza(int arg1)
{
    int i;
    for(i=arg1+1; i>=arg1; i++)
    {
        if(nie_pierwsza(i) != 1) return i;
    }
}

/*
int main()
{
    printf("%d\n", najmniejszaPierwsza(59));
    return 0;
}
*/