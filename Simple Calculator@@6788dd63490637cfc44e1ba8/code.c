#include <stdio.h>
void main() {
    int a,b,n;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if(c=="+"){
        n= a+b;
        printf("%d", n);
    }else if(c=="-"){
        n=a-b;
        printf("%d", n);
    }else if(c=="*"){
        n=a*b;
        printf("%d", n);
    }else if(c=="/"){
        n=a/b;
        printf("%d", n);
    }
}