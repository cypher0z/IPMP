#include <stdio.h>

void display(int *arr, int size){
    int i=0;
    while(i<size){
        printf("%d ,",arr[i]);
        i++;
    }
    printf("\n");
}

void swap(int *arr, int a, int b){
    int temp = arr[b];
    arr[b] = arr[a];
    arr[a] = temp;
}

void sort(int *arr, int n){
    int a = 0, b = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            swap(arr, a, i);
            a++;
            if(arr[i] == 1){
                b++;
            }
        }
        else if(arr[i] == 1){
            if(b == 0){
                b = i;
            }
            else{
                b++;
                swap(arr, b, i);
            }
        }
        else{
            swap(arr, n-1, i);
            n--;
            i--;
        }
    }
}

int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    display(arr, n);
    sort(arr, n);
    display(arr, n);
    return 0;
}