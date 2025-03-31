#include <stdio.h>
int main()
{
    int n,i,f=0;
    scanf("%d", &n);
    int lis[n];
    for(i=0;i<n;i++){
        scanf("%d", &lis[i]);
    }
    for(i=0;i<n;i++){
        if(lis[i]>lis[i-1] && lis[i]>lis[i+1]){
            printf("%d\n", lis[i]);
            f=1;
            break;
        }
        if(i==n){
            if(lis[i]>lis[i-1]){
                printf("%d",lis[n-1]);
                f=1;
                break;
            }
        }
    }

    if(f==0){
        printf("-1");
    }
    return 0;
}
