#include <stdio.h>
#include <stdlib.h>

int rfib(int n)
{
    if(n<=1)
        return n;
    return rfib(n-2) + rfib(n-1);
}
int main()
{
    printf("%d \n", rfib(6));

    return 0;
}
