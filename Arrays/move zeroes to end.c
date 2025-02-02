#include <stdio.h>

void display(int *arr, int size){
    int i=0;
    while(i<size){
        printf("%d ,",arr[i]);
        i++;
    }
    printf("\n");
}
void movezero(int *arr, int n){
    int l = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            l++;
            if(l != i){
                int temp = arr[i];
                arr[i] = arr[l];
                arr[l] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    movezero(arr, n);
    display(arr, n);
    return 0;
}