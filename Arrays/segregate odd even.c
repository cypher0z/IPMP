#include <stdio.h>

void segregate(int *arr, int n){
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1){
            b++;
        }
        else{
            if(a!=b){
                int temp = arr[i];
                arr[i] = arr[a];
                arr[a] = temp;

                a++;
                b++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
}

int main(){
    int arr[] = { 1, 3, 0, 2, 6, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate(arr, n);
    return 0;
}