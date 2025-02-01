#include <stdio.h>

void display(int *arr, int size){
    int i=0;
    while(i<size){
        printf("%d ,",arr[i]);
        i++;
    }
    printf("\n");
}

void rearrange(int *arr, int n){
    int l = -1, r = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            l++;
            if(l != i){
                int temp = arr[i];
                arr[i] = arr[l];
                arr[l] = temp;
            }
        }
    }
    l++;
    for(int i = 1; i < n; i+=2){
        if(l == n){
            break;
        }
        int temp = arr[i];
        arr[i] = arr[l];
        arr[l] = temp;

        l++;
    }
}

int main(){
    int arr[] = {-1, 3, -2, -4, 7, -5};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr, size);
    rearrange(arr, size);
    display(arr, size);
    return 0;
}