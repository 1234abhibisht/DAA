#include <stdio.h>
void selectionSort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        int minIdx = i;
        for(int j = i + 1; j <= n - 1; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}
int main() {
    int arr[] = {5,4,3,2,1};
    selectionSort(arr, 5);
    for(int i = 0; i <= 4; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}