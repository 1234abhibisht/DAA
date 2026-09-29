// for binary search sort the array

#include <stdio.h>
// void bubbleSort(int arr[], int n) {
//     for(int i = 0; i <= n - 2; i++) {
//         for(int j = 0; j <= n - 2 - i; j++) {
//             if(arr[j + 1] < arr[j]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
int binarySearch(int arr[], int n) {
    int target = 4;
    int low = 0;
    int high = n - 1;
    while(low < high) {
        int mid = (low + high) / 2;
        if(arr[mid] > target) {
            high = mid - 1;
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    // bubbleSort(arr, 8);
    int ans = binarySearch(arr, 8);
    printf("%d",ans);
    return 0;
}