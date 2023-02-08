#include <stdio.h>
void nat(int);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    nat(n);
    return 0;
}

void nat(int n)
{
    if (n>0)
    {
        printf("%d\n",n);
        nat(n-1);
    }
}