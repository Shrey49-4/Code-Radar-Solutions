#include <stdio.h>
int main()
{
    int i,j,a,k,b,c,d,e;
    scanf("%d",&a);
    e = a-1;
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(b=e;b>=1;b--)
    {
        for(d=1;d<=e-b+1;d++)
        {
            printf(" ");
        }
        for(c=1;c<=2*b-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
}