#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {4,1,3};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 1; i < 1000000; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[j]!=i){
                count++;
            }
        }
        if(count==size){
            printf("%d is the missing number.",i);
            break;
        }
    }
    return 0;
}