#include <stdio.h>

int repeat(int *arr, int n){
    int n1, n2, count1, count2;
    count1=0;
    count2=0;
    for(int i = 0; i < n; i++){
        if(arr[i]==n1){
            count1++;
        }
        else if(arr[i]==n2){
            count2++;
        }
        else if(count1==0){
            n1=arr[i];
            count1++;
        }
        else if(count2==0){
            n2=arr[i];
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i = 0; i < n; i++){
        if(arr[i]==n1){
            count1++;
        }
        if(arr[i]==n2){
            count2++;
        }
    }
    if(count1>n/3){
        return n1;
    }
    if(count2>n/3){
        return n2;
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,1,4,3,6,7,3,3,2,3,1};
    int n = sizeof(arr)/sizeof(int);
    int result = repeat(arr, n);
    printf("%d", result);
    return 0;
}