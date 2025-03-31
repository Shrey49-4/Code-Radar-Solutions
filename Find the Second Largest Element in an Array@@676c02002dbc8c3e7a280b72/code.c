#include <stdio.h>

void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) { // Sort in descending order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortDescending(arr, n);

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) { // Find the first distinct element
            printf("%d", arr[i]);
            return 0;
        }else{
            printf("-1");
            break;
        }
    }

    return 0;
}
