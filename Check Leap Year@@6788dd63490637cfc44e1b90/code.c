#include <stdio.h>
void main() {
    int a;
    scanf("%d", &a);
    if(a%4==0){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
}