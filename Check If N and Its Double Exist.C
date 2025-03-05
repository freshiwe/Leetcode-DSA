/*
Given an array arr of integers, check if there exist two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 
*/

bool checkIfExist(int* arr, int arrSize) {
    int i, j;
    for (i = 0; i < arrSize; i++) {
        for (j = 0; j < arrSize; j++) {
            if (i != j && arr[i] == 2 * arr[j]) {
                return true;
            }
        }
    }
    return false;
}
