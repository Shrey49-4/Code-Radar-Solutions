#include <stdio.h>
int main()
{
    int i,n,lis[10],num=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", lis[i]);
        if(i>=1){
            if(lis[i]>lis[i-1]){
                num=num+1;
            }
        }
    }
    if(num=n-1){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}