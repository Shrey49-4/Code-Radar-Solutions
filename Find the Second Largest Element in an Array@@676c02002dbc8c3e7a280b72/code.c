#include <stdio.h>
int main()
{
    int n,i,temp,j;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("%d", arre[0]);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) { // Sort in descending order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
    }
        }

    printf("%d", arr[1]);
    return 0;
}
}