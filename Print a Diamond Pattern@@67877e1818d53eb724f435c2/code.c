#include <stdio.h>
int main()
{
    int i,j,a,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=2*a-1;j++)
        {
            printf("*");
        }
    }
}