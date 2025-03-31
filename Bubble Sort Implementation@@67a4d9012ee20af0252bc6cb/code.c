#include <stdio.h>
int main()
{
    int n,temp,i,j;
    scanf("%d", &n);
    int lis[n];
    for(i=0;i<n;i++){
        scanf("%d", &lis[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(lis[i]>lis[j]){
                temp = lis[j];
                lis[j]= lis[i];
                lis[i]= temp;
            }
        }
    }
    printf("%d", lis);

    return 0;
}