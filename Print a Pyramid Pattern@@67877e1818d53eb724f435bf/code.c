#include <stdio.h>
void main() 
{
    int i,j,a;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=2a+1;j=j+2)
        {
            printf("* ");
        }
        printf("\n");
    }
}