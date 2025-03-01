#include <stdio.h>

int findNumbers(int* nums, int numsSize);
int countDigits(int n);

int main() {
    int nums[100], count = 0, numsSize;

    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    printf("Enter the numbers of the array:\n");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    count = findNumbers(nums, numsSize);

    printf("Number of elements with even number of digits: %d\n", count);

    return 0;
}

int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1; // special case for 0
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (countDigits(nums[i]) % 2 == 0) {
            count++;
        }
    }
    return count;
}
