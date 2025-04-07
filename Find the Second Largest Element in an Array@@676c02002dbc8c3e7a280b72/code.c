#include <stdio.h>
int main()
{
    int n,i,temp,j;
    scanf("%d", &n);
    int arre[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arre[i]);
    }
    // printf("%d", arre[0]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arre[i]<arre[j])
            {
                temp=arre[i];
                arre[j]=arre[i];
                arre[j]=arre[i];
            }
        }
    }

    printf("%d", &arre[0]);
    return 0;
}