#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    int lis[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &lis[i]);
    }
    int odd=0, even=0;
    for(i=0;i<n;i++){
        if(lis[i]%2==0){
            even=even+1;
        }
        if(lis[i]%2!=0){
            odd=odd+1;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}
