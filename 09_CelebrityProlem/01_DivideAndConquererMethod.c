// Given a 2D matrix, where arr[i][j] = 1 means ith person knows jth person, task is to find the celebrity
// celebrity is a person that is known to all but knows no one

#include <stdio.h>
int findCandidate(int arr[][3], int low, int high) {
    if(low == high) {  // only sigle element in 2d array
        return low;
    }
    int mid = low + (high - low) / 2;
    int left = findCandidate(low, mid, arr);
    int right = findCandidate(mid + 1, high, arr);
    if(arr[left][right] == 1) {
        return right;
    }
    else {
        return left;
    }
}
int findCelebrity(int arr[][3], int low, int high) {
    int candidate = findCandidate(arr, 0, 2);
    // verify candidate
    for(int i = 0; i <= 2; i++) {
        if(i != candidate) {
            if(arr[candidate][i] == 1 || arr[i][candidate] == 0) {
                return -1;
            }
        }
    }
    return candidate;
}
int main() {
    int arr[3][3] = {{0,1,0},{0,0,0},{0,1,0}};
    int celebrity = findCelebrity(arr, 0, 2);
    printf("%d", celebrity);
    return 0;
}