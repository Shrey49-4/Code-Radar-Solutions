#include <stdio.h>
int main()
{
    int n,temp,i,j;
    scanf("%d", &n);
    int lis[n];
    for(i=0;i<n;i++){
        scanf("%d", &lis[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(lis[i]>lis[j]){
                temp = lis[j];
                lis[j]= lis[i];
                lis[i]= temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d", lis[i]);
    }

    return 0;
}