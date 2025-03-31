#include <stdio.h>
int main()
{
    int n,i,min =0,max=0;
    scanf("%d", &n);
    int lis[n];
    for(i=0;i<n;i++){
        scanf("%d", &lis[i]);
    }
    for(i=0;i<n;i++){
        if(lis[i]>lis[i-1]){
            max=lis[i];
        }
        // if(lis[i]<lis[i-1]){
        //     min=lis[i];
        // }
    }
    printf("%d %d", max, min);
    return 0;
}
