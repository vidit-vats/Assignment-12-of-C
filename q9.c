#include <stdio.h>
#include <math.h>
void dectooct(int);
int main()
{
    int n;
    double res=0,res1=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Result:");

    dectooct(n);
    printf("\n");
    return 0;
}

void dectooct(int n)
{
    int i,res;
    if (n==0)
    return;

    res=n%8;
    dectooct(n/8);
    printf("%d",res);

}