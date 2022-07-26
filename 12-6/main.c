#include <stdio.h>
#include <stdlib.h>
void evenN(int x)
{
    if(x>0)
    {
        if(x%2==0)
            printf("%d ",x);
        evenN(x-1);
    }
}
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d",&n);
    printf("Even numbers in reverse order: ");
    evenN(n);
    return 0;
}
