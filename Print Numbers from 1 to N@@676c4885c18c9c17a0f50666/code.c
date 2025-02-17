#include <stdio.h>
int main()
{
    int a,i,c=1;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        printf("%d", c++);
    }
    return 0
}