#include <stdio.h>
#include <math.h>
void dectobin(int);
int main()
{
    int n;
    double res=0,res1=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    dectobin(n);
    printf("\n");
    return 0;
}

void dectobin(int n)
{
    int res;
    if (n==0)
    return;

    res=n%2;
    dectobin(n/2);
    
    printf("%d",res);
}