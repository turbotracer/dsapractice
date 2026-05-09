#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> pairSum(vector<int> &arr, int target){
    unordered_map<int, int> mp;
    
    for(int i=0; i<arr.size(); i++){
        int x = target - arr[i];
        if (mp.find(x) != mp.end()){
            return {mp[x], i};
        }else{
            mp[arr[i]] = i;
        }
    }
    return {};
}

int main(){
    vector<int> arr = {-1, 3, 4, 2};
    int target = 3;

    vector<int> result = pairSum(arr, target);
    cout << result[0] << " " << result[1] << endl;
}