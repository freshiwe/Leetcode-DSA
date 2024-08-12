int removeElement(int* nums, int numsSize, int val) {
    int j = 0; // This is the index for the new array without the `val` elements
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i]; // Preserve the current element if it's not `val`
            j++;
        }
    }
    return j; // The new length of the array
}
