#include <stdio.h>
#include <stdlib.h>

int BinaryN(int x)
{
    if(x==0)
            return 0;
    return (x%2 + 10*BinaryN(x/2));
}
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("Binary Number : %d",BinaryN(n));
    return 0;
}
