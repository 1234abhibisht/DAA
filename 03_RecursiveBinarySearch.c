#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for(int i = 0; i <= n - 2; i++) {
        for(int j = 0; j <= n - 2 - i; j++) {
            if(arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int recursiveBS(int arr[], int n, int low, int high, int t) {
    if(low > high) {  // base case (if low > high target not found in arrayv )
        return -1;
    }
    int mid = (low + high) / 2;
    if(arr[mid] > t) {
        recursiveBS(arr, n, low, mid - 1, t);
    }
    else if(arr[mid] < t) {
        recursiveBS(arr, n, mid + 1, high, t);
    }
    else {
        return mid;
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    bubbleSort(arr, 8);  
    int ans = recursiveBS(arr, 8, 0, 7, 4);
    if(ans == -1) {
        printf("target not found");
    }
    else {
        printf("%d",ans);
    }
    return 0;
}