#include <stdio.h>
#include <stdlib.h>

void repeat(int *arr, int size){
    int num = 0;
    for(int i = 0; i < size; i++){
        num ^= arr[i];
    }
    num &= -num;
    int j=0;
    int k=0;
    int arr1[size] = {0};
    int arr2[size] = {0};
    for(int i = 0; i < size; i++){
        if(num&arr[i] == 1){
            arr1[j] = arr[i];
            j++;
        }
        else{
            arr2[k] = arr[i];
            k++;
        }
    }
    int n1=0;
    int n2=0;
    for(int i = 0; i < j; i++){
        n1 ^= arr1[i];
    }
    for(int i = 0; i < k; i++){
        n2 ^= arr2[i];
    }
    printf("%d, %d",n1,n2);
}

int main(){
    int arr[]={2,0,1,2,0,3,3,4,6,7,5,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    repeat(arr,n);
    return 0;
}