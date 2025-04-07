#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arre[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arre[i]);
    }
    printf("%d", arre[0]);
    return 0;
}