int potega(int p, int x)
{
    int i, tmp=1;
    for(i=1; i<=x; i++)
    {
       tmp = tmp*p;
    }
    if(x == 0) return 1;
    return tmp;
}
