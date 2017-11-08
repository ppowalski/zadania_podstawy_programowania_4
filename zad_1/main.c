#include <stdio.h>

int pierwiastek(int n)
{
	int i;
    for(i=0; i*i<=n; i++)
    {
        if((i+1)*(i+1) > n) return i;
        else if(i*i==n) return i;
    }
}

/*
int main()
{
    printf("%d\n", pierwiastek(9));
    return 0;
}
*/