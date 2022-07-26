#include <stdio.h>
#include <stdlib.h>
void squ(int x)
{
    if(x>0)
    {
        squ(x-1);
        printf("%d ",x*x);
    }
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Square of first N natural numbers : ");
    squ(n);
    return 0;
}
