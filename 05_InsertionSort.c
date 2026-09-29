#include <stdio.h>
int insertionSort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        for(int j = i + 1; j >= 1; j--) {
            if(arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {2,4,5,6,7};
    insertionSort(arr, 5);
    for(int i = 0; i <= 4; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}