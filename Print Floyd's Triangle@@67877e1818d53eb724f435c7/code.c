#include <stdio.h>
int main()
{
    int i,j,a;
    scanf("%d", &a);
    for(i=0;i<=a-1;i++)
    {
        for(j=i+1;j<=a;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}