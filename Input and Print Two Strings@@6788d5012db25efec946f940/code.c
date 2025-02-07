#include <stdio.h>
void main() {
    char a[20], b[20];
    scanf("%s", &a);
    scanf("%s", &b);
    printf("You entered: %s and %s", &a, &b);
}