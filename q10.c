#include <stdio.h>
#include <math.h>
void reverse(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    reverse(n);
    return 0;
}

void reverse(int n)
{
    int res;
    
    if (n==0)
    return;

    else{
        res=n%10;
        printf("%d",res);
        reverse(n/10);
    }
}

