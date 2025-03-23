#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool threesum(vector<int> arr, int target){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i = 0; i < n-2; i++){
        int a = target - arr[i];
        int l = i + 1;
        int r = n - 1;
        while(l<r){
            cout << arr[i] << " -- " << arr[l] << " -- " << arr[r] << endl;
            if(arr[l]+arr[r]==a){
                return true;
            }
            else if(arr[l]+arr[r]<a){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;
}

int main() { 
    vector<int> arr = { 1, 4, 45, 6, 10, 8 }; 
    int target = 2; 
    if(threesum(arr, target))
        cout << "true";
    else
        cout << "false";
    return 0; 
}