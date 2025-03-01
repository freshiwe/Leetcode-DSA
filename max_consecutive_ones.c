/*Given a binary array nums, return the maximum number of consecutive 1's in the array.*/

#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize);

int main() {
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    int i;

    printf("Enter the elements of the array (0s and 1s):\n");
    for (i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int maxOnes = findMaxConsecutiveOnes(nums, numsSize);
    printf("Maximum number of consecutive 1's is %d\n", maxOnes);

    return 0;
}

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }
    return maxCount;
}
