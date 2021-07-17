#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

/* In nCr method the factorial part is recursive but not nCr part*/
int nCr(int n, int r)
{
    int num, den;

    num = fact(n);
    den = fact(r)*fact(n-1);
    return num/den;
}
/* Recursive method */
int NCR(int n, int r)
{
    if(r==0 || r == n)
    {
        return 1;
    }
    else{
        return NCR(n-1,r-1) + NCR (n-1,r);
    }
}

int main()
{
    printf("%d \n", NCR(5,1));
    return 0;
}
