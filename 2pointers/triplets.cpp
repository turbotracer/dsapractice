#include <bits/stdc++.h>
#include <algorithm>
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
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    sort(arr.begin(), arr.end()); 

    for (int i =0 ; i<arr.size(); i++){
        if (i !=0 && arr[i]== arr[i-1]){
            continue;
        }else{
            int target = -arr[i];
            vector<int> ans = twoSumSorted(arr, target);
            cout << "[" << ans[0] << ", " << ans[1] << "]\n"; // [1, 4]
        }
    }  
    return 0;
}