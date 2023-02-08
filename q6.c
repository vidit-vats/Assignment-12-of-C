#include <stdio.h>
void even (int);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    even(n);
    return 0;
}

void even (int n)
{
    if (n==0)
    return;
printf("%d ",2*n);
    even(n-1);
}
    