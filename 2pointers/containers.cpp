#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int maxContainer(vector<int>& arr) {
    int left = 0, right = arr.size()-1;
    int maxWater = 0;
    while (left < right){

        int water = (right - left)*min(arr[right],arr[left]);
        if (water > maxWater){
            maxWater = water;
        }
        if(arr[left] <= arr[right]) {
            left++;
        }
        else{
            right--;
        }
    }
    return maxWater;
}

int main() {
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int ans = maxContainer(arr);
    cout << ans;
    return 0;
}