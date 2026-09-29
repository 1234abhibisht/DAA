#include <stdio.h>
#include <stdbool.h>
void bubbleSort(int arr[]) {
    int n = 5;
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
int main() {
    int arr[] = {5,4,3,2,1};
    bubbleSort(arr);
    for(int i = 0; i <= 4; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
