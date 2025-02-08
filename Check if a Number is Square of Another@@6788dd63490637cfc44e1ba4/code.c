#include <stdio.h>
void main() {
    int a,b,c=0;
    scanf("%d %d", &a,&b);
    c = b*b;
    if(a==c){
        printf("Yes");
    }else{
        printf("No");
    }
}