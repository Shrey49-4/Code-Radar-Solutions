#include <stdio.h>
void main() {
    int a,i,n=0;
    scanf("%d", &a);
    if(a==2 || a==1 || a==3)
    {
        printf("Prime");
    }else {
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0){
                n+=1;
                return;
            }
        }
    if(n==0){
        printf("Prime");
    }else if(n>0){
        printf("Not Prime");
    }
    }
}