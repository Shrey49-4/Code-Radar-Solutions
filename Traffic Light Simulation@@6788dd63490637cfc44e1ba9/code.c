#include <stdio.h>
int main() {
    char a[10];
    scanf("%s", &a);
    if(a[10]=="R")
    {
        printf("Stop");
    }
    else if(a[10]=="G"){
        printf("Go");
    }
    else if(a[10]== "Y"){
        printf("Slow Down");
    }

    return 0;
}