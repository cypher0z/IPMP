#include <stdio.h>

void Display(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

void Union(int *arr1, int *arr2, int n1, int n2){
    int count = 0;
    int size = n1 + n2;
    int arr[size];
    int j = 0, k = 0;
    for(int i = 0; i < size; i++){
        if(arr1[j] <= arr2[k] ){
            if(arr1[j] != arr[i-1] || i == 0){
                arr[i]=arr1[j];
                if(arr1[j] == arr2[k]){
                    j++;
                    k++;
                }
                else{
                    j++;
                }
                count++;
            }
            else{
                i--;
                j++;
            }
        }
        else{
            if(arr2[k] != arr[i-1] || i == 0){
                arr[i]=arr2[k];
                k++;
                count++;
            }
            else{
                k++;
                i--;
            }
        } 
        if(j==n1 && k==n2){
            break;
        }
    }
    Display(arr, count);
}

void Intersection(int *arr1, int *arr2, int n1, int n2){
    int size = n1>n2 ? n1:n2;
    int count = 0;
    int arr[size];
    int j = 0, k = 0;
    for(int i = 0; i < size; i++){
        if(arr1[j]<arr2[k]){
            j++;
            i--;
        }
        else if(arr2[k]<arr1[j]){
            k++;
            i--;
        }
        else{
            arr[i]=arr1[j];
            j++;
            k++;
            count++;
        }
        if(i == n1 || j == n2){
            break;
        }
    }
    Display(arr, count);
}

int main(){
    int arr1a[]={1,1,2,6,9,9};  // duplicate elements
    int arr2a[]={1,3,3,6,7,7,9};
    int n1a = sizeof(arr1a)/sizeof(arr1a[0]);
    int n2a = sizeof(arr2a)/sizeof(arr2a[0]);
    Union(arr1a, arr2a, n1a, n2a);
    Intersection(arr1a, arr2a, n1a, n2a);
    return 0;
}