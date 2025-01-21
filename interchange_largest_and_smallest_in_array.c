#include <stdio.h>
void read_array(int arr[10],int n);
void display_array(int arr[10],int n);
void interchange (int arr[10],int);
int find_largest(int arr[10],int n);
int find_smallest(int arr[10],int n);



int main(){
    int my_arr[10],i,n,pos;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("Enter the numbers of the array\n");
    read_array(my_arr,n);
    find_smallest(my_arr,n);
    find_largest(my_arr,n);
    interchange(my_arr,n);
    printf("The displayed array is \n");
    display_array(my_arr,n);
    return 0;

}
void read_array(int arr[10],int n){
    int i;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    }
int find_smallest(int arr[10],int n){
    int i,smallest = arr[0],pos=0;
    for (i=1;i<n;i++){
        if (arr[i] < smallest){
                smallest = arr[i];
                pos = i;
            }
        }
        return pos;
    }
int find_largest(int arr[10],int n){
    int i, largest = arr[0],pos=0;
    for (i=1;i<n;i++){
        if (arr[i] > largest){
                largest = arr[i];
                pos = i;
            }
        }
        return pos;
    }
void interchange(int arr[],int n){
    int temp,small_pos,large_pos;
    small_pos = find_smallest(arr,n);
    large_pos = find_largest(arr,n);
    temp = arr[small_pos];
    arr[small_pos] = arr[large_pos];
    arr[large_pos] = temp;

}
void display_array(int arr[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
