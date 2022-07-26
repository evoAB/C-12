#include <stdio.h>
#include <stdlib.h>
void octalN(int x)
{
    if(x>0)
    {
        octalN(x/8);
        printf("%d",x%8);
    }
}
int main()
{
    int n;
    printf("Enter Decimal Number : ");
    scanf("%d",&n);
    printf("Octal of a given decimal number : ");
    octalN(n);
    return 0;
}
