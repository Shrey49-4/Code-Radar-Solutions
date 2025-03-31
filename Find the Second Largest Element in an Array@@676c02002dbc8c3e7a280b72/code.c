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
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sortDescending(arr, n);

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) { // Find the first distinct element
            printf("Second largest element: %d\n", arr[i]);
            return 0;
        }
    }

    printf("No second largest element found (all elements are equal).\n");
    return 0;
}
