#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumSorted(const vector<int>& arr, int target) {
    int left = 0, right = (int)arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return {left, right};
        if (sum < target) left++;
        else right--;
    }

    return {-1, -1}; // fallback (problem says one valid solution always exists)
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 10};
    int target = 12;

    vector<int> ans = twoSumSorted(arr, target);
    cout << "[" << ans[0] << ", " << ans[1] << "]\n"; // [1, 4]
    return 0;
}