#include <stdio.h>
#include <stdlib.h>

int miss(int arr[], int n){
    int m;
    m=n+1;
    int hash[m+1];
    for(int i = 0; i<m-1; i++){
        hash[arr[i]]++;
    }
    for(int i = 1; i<m; i++){
        if(hash[i]==0){
            return i;
        }
    }
    return 0;
}

int main(){
    int arr[]={1,2,3,4,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int missing = miss(arr,n);
    printf("The missing number is : %d",missing);
    return 0;
}