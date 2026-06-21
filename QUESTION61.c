#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5; // Numbers are from 1 to 5

    int total = n * (n + 1) / 2;
    int sum = 0;

    for(int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    printf("Missing Number = %d", total - sum);

    return 0;
}