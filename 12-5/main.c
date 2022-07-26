#include <stdio.h>
#include <stdlib.h>
void evenN(int x)
{
    if(x>0)
    {
        evenN(x-1);
        if(x%2==0)
            printf("%d ",x);
    }
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Even numbers : ");
    evenN(n);
    return 0;
}
