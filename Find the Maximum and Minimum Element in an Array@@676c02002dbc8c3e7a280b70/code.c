#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int lis[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &lis[i]);
    }
    int max=lis[0], min=lis[0];
    for(i=0;i<n;i++){
        if(lis[i]>max){
            max=lis[i];
        }
        if(lis[i]<min){
            min=lis[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}
