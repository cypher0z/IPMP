#include <stdio.h>

void minmax(int *arr, int size){
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d is min and %d is max.",min,max);
}

int main(){
    int arr[] = {1,24,4,78,-234,234,5,-666,1000,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    minmax(arr, n);
    return 0;
}