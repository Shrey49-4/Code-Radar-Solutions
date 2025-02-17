#include <stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=2*a-1;i++)
    {
        for(j=1;j<=a+1;j++)
        {
            if(i==a){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}