// we are given an array of integers and are required to find the sum of all the substets and in a vector

#include <bits/stdc++.h>
using namespace std;
vector<int> subsetSum(vector<int> set) {
    int n = set.size();
    int subsets = 1 << n;  // number of subsets
    vector<int> ans;
    for(int i = 0; i <= subsets - 1; i++) {
        vector<int> temp;
        int sum = 0;
        for(int j = 0; j <= n - 1; j++) {
            if(i & 1 << j) {  // & is to perform arithematic AND operation
                temp.emplace_back(set[j]);
            }
        }
        for(auto it : temp) {
            sum += it;
        }
        ans.emplace_back(sum);
    }
    return ans;
}
int main() {
    vector<int> set = {1, 2, 3};
    vector<int> ans = subsetSum(set);
    for(auto it : ans) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(2 ^ n){outer loop will go 2^n times, as there are 2^n subsets} * O(n) = O(2 ^ n * n)
// Space Complexity = O(2 ^ n){ans vector} + O(n){temp vector} = O(2 ^ n * n)