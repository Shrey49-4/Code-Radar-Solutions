#include <stdio.h>
int main()
{
    int i,n,arr[10],num=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", arr[i]);
        if(i>=1){
            if(arr[i+1]>=arr[i]){
                num++;
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