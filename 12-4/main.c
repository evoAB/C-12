#include <stdio.h>
#include <stdlib.h>
void oddN(int x)
{
    if(x>0)
    {
        if(x%2)
            printf("%d ",x);
        oddN(x-1);
    }
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Odd numbers in reverse order: ");
    oddN(n);
    return 0;
}
