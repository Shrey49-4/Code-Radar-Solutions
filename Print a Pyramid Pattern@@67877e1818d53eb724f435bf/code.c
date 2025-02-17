#include <stdio.h>
int main() 
{
    int i,j,a;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        
    }
    return 0;
}