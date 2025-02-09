#include <stdio.h>
int main() {
    char a;
    scanf("%s", &a);
    if(a=="R"){
        printf("Stop");
    }
    else if(a=="G"){
        printf("Go");
    }
    else if(a== "Y"){
        printf("Slow Down");
    }

    return 0;
}