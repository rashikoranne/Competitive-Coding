#include <stdio.h>
#include <stdlib.h>

/* USE THIS WHEN CALCULATING POWER USING RECURSION */

int power(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        return power(m*m, n/2);
    }
    else
    {
        return power(m*m, (n-1)/2) * m;
    }
}

int main()
{
    int r=power(2,9);
    printf("%d", r);
    return 0;
}
