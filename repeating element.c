#include <stdio.h>
#include <stdlib.h>

void repeat(int arr[],int n){
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d ,", arr[i]);
            }
        }
    }
}

int main(){
    int arr[]={1,2,3,4,55,3,2,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    repeat(arr,n);
    return 0;
}