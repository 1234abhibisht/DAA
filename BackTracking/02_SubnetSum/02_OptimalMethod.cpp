// using recursion (backtracking)

#include <bits/stdc++.h>
using namespace std;
void subsetSum(vector<int> &set, int idx, int sum, vector<int> &ans) {
    if(idx == set.size()) {
        ans.emplace_back(sum);
        return;
    }
    subsetSum(set, idx + 1, sum + set[idx], ans);
    subsetSum(set, idx + 1, sum, ans);
}
int main() {
    vector<int> set = {1, 2, 3};
    vector<int> ans;
    subsetSum(set, 0, 0, ans);
    // sort ans if answer should be in sorted order
    sort(ans.begin(), ans.end());
    for(auto it : ans) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(2 ^ n){as 2 calls and we are increasing idx by 1} - using cheat sheet
// Space Complexity = O(2 ^ n)