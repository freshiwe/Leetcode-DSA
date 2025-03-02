/* Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.*/

#include <stdio.h>

void duplicateZeros(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == 0) {
            for (int j = arrSize - 1; j > i; j--) {
                arr[j] = arr[j - 1];
            }
            i++;
        }
    }
}

int main() {
    int arr[100], arrSize;
    printf("Enter the size of the array:\n");
    scanf("%d", &arrSize);
    printf("Enter the numbers of the array:\n");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }
    duplicateZeros(arr, arrSize);
    printf("Array after duplicating zeros:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
