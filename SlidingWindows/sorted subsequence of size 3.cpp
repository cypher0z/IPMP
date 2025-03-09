#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int main(){
    std::vector<int> arr = {12, 5, 8, 19, 3, 7, 15};
    int min = 0;
    int max = 0;
    for(int i = 1; i< arr.size(); i++){
        if(arr[i] < arr[min]){
            min = i;
        }
        else{
            max = i;
        }
        if((max - min) > 1){
            printf("%d, %d, %d\n",arr[min], arr[min+1],arr[max]);
            break;
        }
    }
    return 0;
}