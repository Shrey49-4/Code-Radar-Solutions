#include <stdio.h>

int main() {
    int n, i, found = 0;
    scanf("%d", &n);
    
    int lis[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &lis[i]);
    }

    for(i = 1; i < n-1; i++) { // Start from 1 and end at n-2 to avoid out-of-bound
        if(lis[i] > lis[i-1] && lis[i] > lis[i+1]) {
            printf("%d\n", lis[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No peak found.\n");
    }
    
    return 0;
}
