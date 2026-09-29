// in this we have to find a subarray of size k which has maximum sum
// and return that maximum sum

#include <stdio.h>
#include <limits.h>
int maxFunc(int lss, int rss, int css) {
    int max_val = lss;
    if(rss > max_val) {
        max_val = rss;
    }
    else if(css > max_val) {
        max_val = css;
    }
    return max_val;
}
int divideAndConqurerMethod(int arr[], int min, int max) {
    if(min == max) {
        return arr[min];
    }
    int mid = min + (max - min) / 2;  // optimised way to write mid = (min + max) / 2
    int lss = divideAndConqurerMethod(arr, min, mid);
    int rss = divideAndConqurerMethod(arr, mid + 1, max);
    int leftMaxSum = INT_MIN, rightMaxSum = INT_MIN, sum = 0;
    for(int i = mid; i >= 0; i--) {
        sum = sum + arr[i];
        if(sum > leftMaxSum) {
            leftMaxSum = sum;
        }
    }
    sum = 0;
    for(int i = mid + 1; i <= max; i++) {
        sum = sum + arr[i];
        if(sum > rightMaxSum) {
            rightMaxSum = sum;
        }
    }
    int css = lss + rss;
    int max_sum = maxFunc(lss, rss, css);
    return max_sum;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = divideAndConqurerMethod(arr, 0, n - 1);
    return 0;
}