# include <stdio.h>
void kadane(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i <= n - 1; i++) {
        sum += arr[i];
        if(sum < 0) {
            sum = 0;
        }
    }
}
int main() {
    int n;
    printf("size of array : ");
    scanf("%d",&n);
    int arr[5];
    printf("array : ");
    for(int i = 0; i <= n - 1; i++) {
        scanf("%d",&arr[i]);
    }
    kadane(arr, n);
    return 0;
}