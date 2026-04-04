#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    int left = 0, right = 1;

    while (right < arr.size()) {

        if (arr[right] != arr[left]){
            left++;
            arr[left] = arr[right];
        }
        right++;
    }
    return left+1;
}

int main() {
    vector<int> arr = {1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 4};

    int ans = removeDuplicates(arr);
    cout << ans;
    return 0;
}