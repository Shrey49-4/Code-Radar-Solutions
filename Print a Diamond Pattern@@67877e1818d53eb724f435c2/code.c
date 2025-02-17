#include <stdio.h>
int main()
{
    int i,j,a,k;
    scanf("%d",&a);
    for(i=1;i<=2*a-1;i++)
    {
        for(k=1;k<=a;k++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}