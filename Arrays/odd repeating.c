#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10000

void findodd(int arr[]){
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    int hash[MAX]={0};
    for(int j = 0; j<i; j++){
        hash[arr[j]]++;
    }
    for(i=0; i<MAX; i++){
        if(hash[i]%2==1){
            printf("%d is repeated odd number of times\n",i);
        }
    }
    //brute-force
    /*for(int j = 0; j<i-1; j++){
        int count = 0;
        for(int k = 0; k<i; k++){
            if(arr[j]==arr[k]){
                count++;
            }
        }
        if(count%2==1){
            printf("%d is repeated odd times\n", arr[j]);
        }
    }*/
}

int main(){
    int arr[]={1,1,4,3,3,2,1,5,2,4};
    findodd(arr);
    return 0;
}