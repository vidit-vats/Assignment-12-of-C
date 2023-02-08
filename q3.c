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

    odd (n-1);
    printf("%d\n",2*n-1);
}

