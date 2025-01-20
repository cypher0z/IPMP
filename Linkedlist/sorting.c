#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void display(int *arr, int size){
    int i=0;
    while(i<size){
        printf("%d ,",arr[i]);
        i++;
    }
    printf("\n");
}

void bubble(int *arr, int n){//not optimized
    for(int i = n; i>0 ; i--){
        for(int j = 1; j<i; j++){
            if(arr[j]<arr[j-1]){
                swap(arr, j, j-1);
            }
            display(arr, n);
        }
    }
}

void insertion(int *arr, int n){
    for(int i = 1; i<n; i++){
        int j = i-1;
        while(arr[j+1]<arr[j] && j>=0){
            swap(arr, j+1, j);
            j--;
        }
    }
}

void selection(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr, min, i);
    }
}

void quicksort(int *arr, int l, int h){
    if(l<h){
        int pivot = h;
        int j = l-1;
        for(int i = l; i<h; i++){
            if(arr[i]<arr[pivot]){
                j++;
                swap(arr, j, i);
            }
        }
        swap(arr, j+1, pivot);
        pivot = j+1;
        printf("Pivot is %d  ", arr[pivot]);
        display(arr, 10);
        quicksort(arr, l, pivot-1);
        quicksort(arr, pivot+1, h);
    }
}

void quick(int *arr, int n){
    int low = 0;
    int high = n-1;
    quicksort(arr, low, high);
}


void mergesort(int *arr, int l, int r){
    if(l<r){
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, r);

        int n1 = m - l + 1;
        int n2 = r - m ;
        int arr1[n1];
        int arr2[n2];
        for(int i = 0; i < n1; i++){
            arr1[i] = arr[l + i];
        }
        for(int j = 0; j < n2; j++){
            arr2[j] = arr[m + 1 + j];
        }
        int i = 0;
        int j = 0;
        int k = l;
        while(i < n1 && j < n2){
            if(arr1[i] < arr2[j]){
                arr[k] = arr1[i];
                i++;
            }
            else{
                arr[k] = arr2[j];
                j++;
            }
            k++;
        }
        
        if(i < n1){
            while(i < n1){
                arr[k] = arr1[i];
                i++;
                k++;
            }
        }

        if(j < n2){
            while(j < n2){
                arr[k] = arr2[j];
                j++;
                k++;
            }
        }

    }
}

void merge(int *arr, int n){
    int l = 0;
    int r = n-1;
    mergesort(arr, l, r);
}

void heapify(int *arr, int n, int i){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<n && arr[largest]<arr[l]){
        largest = l;
    }
    if(r<n && arr[largest]<arr[r]){
        largest = r;
    }
    if(largest!=i){
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void heap(int *arr, int n){
    for (int  i = n/2 - 1; i >=0; i--){
        heapify(arr, n, i);
    }
    for(int i = n-1; i>0; i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}
int main(){
    int arr[]={4, 2, 6, 1, 0, 7, 5, 9, 12, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    //bubble(arr, n);
    //insertion(arr, n);
    //selection(arr, n);
    //quick(arr, n);
    //merge(arr, n);
    heap(arr, n);
    display(arr, n);
    return 0;
}