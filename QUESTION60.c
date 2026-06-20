#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5;

    int index = 0;

    // Move non-zero elements to front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill remaining positions with 0
    while (index < n) {
        arr[index++] = 0;
    }

    printf("Array after moving zeroes: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}