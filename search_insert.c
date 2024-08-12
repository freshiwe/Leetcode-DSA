int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  // Target found, return the index
        }
        else if (nums[mid] < target) {
            left = mid + 1;  // Search the right half
        }
        else {
            right = mid - 1;  // Search the left half
        }
    }

    // If target is not found, return the index where it would be inserted
    return left;
}
