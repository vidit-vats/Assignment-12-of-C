#include <stdio.h>
#include <stdlib.h>
void odd(int);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    odd(n);
    return 0;
}

void odd(int n)
{
    if (n==0)
    return;

    printf("%d\n",2*n-1);
    odd(n-1);
}

