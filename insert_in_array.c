#include <stdio.h>
/* Program to insert in an array at any position*/
/*
int main() {
    int arr[10], pos, n, num, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the numbers of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    printf("Enter the position: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n++;

    printf("The array after insertion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/

/* Program to insert i already sorted array*/
int main(){
    int arr[10],n, num, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the numbers of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

   for (i=0;i<n;i++){
    if (arr[i]>num)
        break;
   }
   for (int j=n;j>i;j--){
    arr[j] = arr[j-1];
   }
   arr[i]=num;
   n++;

   printf("The array after insertion is:\n");
   for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;



}
