// in this we have to find a subarray of size k which has maximum sum
// and return that maximum sum

#include <stdio.h>
#include <limits.h>
int slidingWindowMethod(int arr[], int n, int k) {
    int max = INT_MIN;
    int sum = 0;
    // take total sum of first window
    for(int i = 0; i <= k - 1; i++) {
        sum = sum + arr[i];
    }
    max = sum;
    for(int i = k; i <= n - 1; i++) {
        sum = sum - arr[i - k] + arr[i];
        if(sum > max) {
            max = sum;
        }
    }
    return max;
}
int main() {

    return 0;
}