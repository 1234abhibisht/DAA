#include <stdio.h>
int pivotElement(int arr[], int min, int max) {
    int pivotEle = min;
    int i = min, j = max;
    while(i < j) {
        while(arr[i] >= pivotEle && i <= max) {
        i++;
    }
    while(arr[j] > pivotEle && j >= min) {
        j--;
    }
    if(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    }
    int temp = arr[j];
    arr[j] = arr[min];
    arr[min] = temp;
    return j;
}
void quickSort(int arr[], int min, int max, int n) {
    if(n > 1) {
        int pivotIdx = pivotElement(arr, min, max);
        quickSort(arr, min, pivotIdx - 1, n);
        quickSort(arr, pivotIdx + 1, max, n);
    }
}
int main() {
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter unsorted array : ");
    for(int i = 0; i <= n - 1; i++) {
        scanf("%d",&arr[i]);
    }
    quickSort(arr, 0, n - 1, n);
    return 0;
}

// Time Complexity - O(nlogn)
//                   worst case - O(n^2)