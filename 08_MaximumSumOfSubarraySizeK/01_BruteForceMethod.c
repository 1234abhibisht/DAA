// in this we have to find a subarray of size k which has maximum sum
// and return that maximum sum

#include <stdio.h>
#include <limits.h>
int bruteForceMethod(int arr[], int n, int k) {
    int max = INT_MIN;
    for(int i = 0; i <= n - k; i++) {
        int sum = 0;
        for(int j = i; j <= (k + i) - 1; j++) {
            sum = sum + arr[j];
            
        }
        if(sum > max) {
            max = sum;
        }
    }
    return max;
}
int main() {

    return 0;
}

// Time Complexity = O(n ^ 2)