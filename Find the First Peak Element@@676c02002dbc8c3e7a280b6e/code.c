#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int lis[n];
    for(i=0;i<n;i++){
        scanf("\n%d", &lis[i]);
        if(i>0){
            if(lis[i]>lis[i-1] && lis[i]>lis[i+1]){
                printf("%d", lis[i]);
                break;
            }
        }
    }
    return 0;
}