#include <stdio.h>
#include <stdlib.h>
void reverseN(int x)
{
    if(x>0)
    {
        printf("%d",x%10);
        reverseN(x/10);
    }
}

int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    reverseN(n);
    return 0;
}
