#include <stdio.h>
int main()
{
    int i,j,a,c=1;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ", c++);
        }
        printf("\n");
    }
    return 0;
}