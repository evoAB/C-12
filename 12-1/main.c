#include <stdio.h>
#include <stdlib.h>

void printN(int a)
{
    if(a>1)
        printN(a-1);
    printf("%d ",a);
}

int main()
{
    int n;
    printf("Enter input : ");
    scanf("%d",&n);
    printN(n);
    return 0;
}
