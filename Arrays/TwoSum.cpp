#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void twosum(vector<int> arr, int target){
    unordered_set<int> hash;
    for(auto i : arr){
        if(hash.find(i)==hash.end()){
            hash.insert(target-i);
        }
        else {
            cout << "True";
            return;
        }
        
    }
    cout << "False";
}

int main(){
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -1;
    twosum(arr, target);
    return 0;
}