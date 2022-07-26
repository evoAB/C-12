#include <stdio.h>
#include <stdlib.h>
void oddN(int x)
{
    if(x>0)
    {
        oddN(x-1);
        if(x%2)
            printf("%d ",x);
    }
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Odd numbers : ");
    oddN(n);
    return 0;
}
