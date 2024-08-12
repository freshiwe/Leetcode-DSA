#include <stdio.h>

int removeDuplicates(int* nums, int numsSize, int* expectedNums) {
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            expectedNums[j] = nums[i];
            j++;
        }
    }
    return j;  // Return the number of unique elements
}

int main() {
    int nums[] = {1, 1, 1, 2, 2, 3, 4, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int expectedNums[numsSize];
    int k = removeDuplicates(nums, numsSize, expectedNums);

    printf("Unique elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", expectedNums[i]);
    }
    return 0;
}
