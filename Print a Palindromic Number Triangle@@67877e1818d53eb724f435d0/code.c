#include <stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        for(l=i-1;l>=1;l--)
        {
            printf("");
        }
        printf("\n");

    }
    return 0;
}