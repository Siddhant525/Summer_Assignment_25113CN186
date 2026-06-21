#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxCount = 0, element;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", element);
    printf("Frequency = %d", maxCount);

    return 0;
}